#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "deleteenemy.h"
#include "RenderBeingHitted.h"

int X = SCREEN_WIDTH / 4 + 100, Y = SCREEN_HEIGHT / 4 + 170, W = 50, H = 46 , AttackRange = 28;
int direct = 1;
int Move, Speed, Attack, Defend, Indle , MaxSpeed;
bool quit;
int HP = 100, MAXHP = 5;
int TimeHeal = 0, MaxTimeHeal = 5000;

void CreateBlood( int X, int Y, int W, int H , int DIRECT )
{
    int Find = -1;
    if ( Find != -1 )
    {
            SaveHitted[Find].x = X;
            SaveHitted[Find].y = Y;
            SaveHitted[Find].w = W;
            SaveHitted[Find].h = H;
            SaveHitted[Find].time = 20;
            SaveHitted[Find].direct = DIRECT;
    } else
    {
            Hitted tmp;
            tmp.x = X;
            tmp.y = Y;
            tmp.w = W;
            tmp.h = H;
            tmp.time = 20;
            tmp.direct = DIRECT;
            SaveHitted.push_back( tmp );
    }

}

void PlayerDealDamage( int X, int Y, int Direct )
{
    int rX = X + 8, rY = Y, rEX, rEY ;
    for ( int i = 0; i < ECap; ++i )
    {
        rEX = enemy[i].x + EXPlus[i]; rEY = enemy[i].y + EYPlus[i];

        if ( EDefend[i] > 0 && EDirect[i] != direct ) continue;

        //right
        if ( Direct == 1 )
        {
           if ( rEX - rX <= 30 && rEX - rX >= 0 )
           {
               EHP[i] --;
               if ( EHP[i] <=0 ) deleteEnemy(i); else
               {
                   CreateBlood( rEX, rEY , enemy[i].w, enemy[i].h , direct );
               }
           }
        } else
        //Left
        {
           if ( rX >= rEX && abs( rX - rEX <= 30) )
           {
               EHP[i] --;
               if ( EHP[i] <=0 ) deleteEnemy(i); else
               {
                  CreateBlood( rEX, rEY , enemy[i].w, enemy[i].h , direct );
               }
           }
        }

    }
}

void ProcessPlayer()
{
    SDL_Event e;

    if ( Speed > 0 ) Speed --;

    //healing
    if ( TimeHeal <= 0 && HP < MAXHP )
    {
        HP ++; TimeHeal = MaxTimeHeal;
        int Find = -1;
        for ( int i = 0; i < SaveHealing.size(); ++ i )
        if ( SaveHealing[ i ].time == -1 )
        {
            Find = i;
            break;
        }

        Healing tmp;
        tmp.x = X + 8;
        tmp.y = Y + 4;
        tmp.w = W - 10;
        tmp.h = H - 1;
        tmp.time = 20;

        if ( Find == -1 ) SaveHealing.push_back( tmp ); else
        SaveHealing[ Find ] = tmp;

    } else if ( TimeHeal > 0 ) TimeHeal --;

    //Event keyboard

    while ( SDL_PollEvent( &e ) != 0)
               {

                   if ( e.type == SDL_QUIT )
                   {
                       quit = true;
                   }
                   else if( e.type == SDL_KEYDOWN )
                    {
                        //Walk
                        if( e.key.keysym.sym == SDLK_a )
                        {
                             if ( direct == 1 ) direct = 2; else
                             if ( Speed <= 0 && X + 10 > 0)
                             {
                                X = X - 2;
                                Speed = MaxSpeed;
                                if ( Move <= 0 ) { Move = 80; Indle = 0; Attack = 0; Defend = 0; }
                             }
                        }
                        else if( e.key.keysym.sym == SDLK_d )
                        {
                             if ( direct == 2 ) direct = 1; else
                             if ( Speed <= 0 && X + 44 < SCREEN_WIDTH )
                             {
                                X = X + 2;
                                Speed = MaxSpeed;
                                if ( Move <= 0 ) { Move = 50; Indle = 0; Attack = 0; Defend = 0; }
                             }
                        } else
                        //Attack
                        if( e.key.keysym.sym == SDLK_k )
                        {
                            //Player deal damage
                            PlayerDealDamage( X, Y, direct );

                            if ( Attack <= 0 ) { Attack = 40; Indle = 0; Move = 0; Defend = 0; }
                        } else
                        //Defend
                        if( e.key.keysym.sym == SDLK_j )
                        {


                            if ( Defend <= 0 ) { Defend = 40; Indle = 0; Move = 0; Attack = 0; }
                        }
                    }
               }
}

