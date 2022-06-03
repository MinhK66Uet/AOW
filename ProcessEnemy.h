#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "ResetEnemy.h"
#include "InitSDL.h"
#include "ProcessPlayer.h"
#include "random.h"
#include "renderBeinghitted.h"
#include "InitArrow.h"

int rX, rY , rEX, rEY , a;

void EnemyDealDamage( int x, int y , int range )
{
     int rX = X + 8, rY = Y - 1, DIRECT;

     if ( rX > x ) DIRECT = 1; else DIRECT = 2;

     if ( (abs( rX - x ) <= range && Defend <= 0) || DIRECT == direct )
     {
        HP = HP - 1;
        TimeHeal = MaxTimeHeal;

        //add animation hitted
        int Find = -1;
        for ( int i = 0; i < SaveHitted.size(); ++ i )
        if ( SaveHitted[i].time == -1)
        {
           Find = i;
           break;
        }

        if ( Find != -1 )
        {
            SaveHitted[Find].x = X + 8;
            SaveHitted[Find].y = Y;
            SaveHitted[Find].w = W;
            SaveHitted[Find].h = H;
            SaveHitted[Find].time = 20;
            SaveHitted[Find].direct = DIRECT;
        } else
        {
            Hitted tmp;
            tmp.x = X + 8;
            tmp.y = Y;
            tmp.w = W;
            tmp.h = H;
            tmp.time = 20;
            tmp.direct = DIRECT;
            SaveHitted.push_back( tmp );
        }


     }
}

void EnemyDoAttack( int i )
{
    //Sword man
    if ( EType[ i ] == 1 )
    {
         //Enemy Attack
         if ( abs( rEX - rX ) <= 28 && EAttackSpeed[i] <= 0 )
         {
             if ( rX < enemy[i].x ) EDirect[i] = 2; else EDirect[i] = 1;
             if ( EAttack[i] <= 0 ) { EAttack[i] = 80; EAttackSpeed[i] = EMaxAttackSpeed[i]; }
             EMove[i] = 0;
             EIndle[i] = 0;
             EDefend[i] = 0;
         }
    } else
    //Archer
    if ( EType[ i ] == 2)
    {
         //Enemy Attack
         if ( abs( rEX - rX ) <= 500 && EAttackSpeed[i] <= 0 )
         {
             if ( rX < enemy[i].x ) EDirect[i] = 2; else EDirect[i] = 1;
             if ( EAttack[i] <= 0 ) { EAttack[i] = 120; EAttackSpeed[i] = EMaxAttackSpeed[i]; }
             EMove[i] = 0;
             EIndle[i] = 0;
             EDefend[i] = 0;
         }
    } else
    //Spear
    if ( EType[ i ] == 3)
    {
         //Enemy Attack
         if ( abs( rEX - rX ) <= 29 && EAttackSpeed[i] <= 0 && EDefend[i] == 0)
         {
             if ( rX < enemy[i].x ) EDirect[i] = 2; else EDirect[i] = 1;
             if ( EAttack[i] <= 0 ) { EAttack[i] = 80; EAttackSpeed[i] = EMaxAttackSpeed[i]; }
             EMove[i] = 0;
             EIndle[i] = 0;
             EDefend[i] = 0;
         }
    } else
    //SharpShooter
    if ( EType[ i ] == 4)
    {
         //Enemy Attack
         if ( abs( rEX - rX ) <= 600 && EAttackSpeed[i] <= 0 )
         {
             if ( rX < enemy[i].x ) EDirect[i] = 2; else EDirect[i] = 1;
             if ( EAttack[i] <= 0 ) { EAttack[i] = 74; EAttackSpeed[i] = EMaxAttackSpeed[i]; }
             EMove[i] = 0;
             EIndle[i] = 0;
             EDefend[i] = 0;
         }
    } else
    //Sword Elf
    if ( EType[ i ] == 5 )
    {
         //Enemy Attack
         if ( abs( rEX - rX ) <= 30 && EAttackSpeed[i] <= 0 )
         {
             if ( rX < enemy[i].x ) EDirect[i] = 2; else EDirect[i] = 1;
             if ( EAttack[i] <= 0 ) {int a = random(1,100); ETypeAttack[i] = a % 2; EAttack[i] = 80; EAttackSpeed[i] = EMaxAttackSpeed[i]; }
             EMove[i] = 0;
             EIndle[i] = 0;
             EDefend[i] = 0;
         }
    }
}

void EnemyDoDamage( int i )
{
    //Sword man
    if ( EType[ i ] == 1 )
    if ( EAttack[i] == 40 )
    {
             EnemyDealDamage( rEX, rEY, 28 );
    }

    //Archer
    if ( EType[ i ] == 2 )
    if ( EAttack[i] == 59 )
    {
             //printf( "%i \n",i );
             int Find = -1;
             for (int j = 0; j < ARROW.size(); ++ j )
             if ( ARROW[j].x == -1 )
             {
                 Find = j;
                 break;
             }

             Arrow tmp;

             tmp.x = enemy[i].x + EXPlus[i];
             tmp.y = enemy[i].y + 9;
             tmp.w = 20;
             tmp.h = 5;
             tmp.dis = 1;
             tmp.range = 999999;
             tmp.type = 1;
             tmp.xPlus = 5;
             tmp.yPlus = 3;
             tmp.speed = 0;
             tmp.maxspeed = 0;

             if ( X + 8 < tmp.x ) tmp.direct = 2; else tmp.direct = 1;

             if ( Find != -1 )
             {
                 ARROW[ Find ] = tmp;
             } else ARROW.push_back( tmp );
    }

    //Sword man
    if ( EType[ i ] == 3 )
    if ( EAttack[i] == 40 )
    {
             EnemyDealDamage( rEX, rEY, 29 );
    }

    //SharpShooter
    //Archer
    if ( EType[ i ] == 4 )
    if ( EAttack[i] == 37 )
    {
             int Find = -1;
             for (int j = 0; j < ARROW.size(); ++ j )
             if ( ARROW[j].x == -1 )
             {
                 Find = j;
                 break;
             }

             Arrow tmp;

             tmp.x = enemy[i].x + EXPlus[i];
             tmp.y = enemy[i].y + 7;
             tmp.w = 25;
             tmp.h = 5;
             tmp.dis = 1;
             tmp.range = 999999;
             tmp.type = 1;
             tmp.xPlus = 5;
             tmp.yPlus = 3;
             tmp.speed = 0;
             tmp.maxspeed = 0;

             if ( X + 8 < tmp.x ) tmp.direct = 2; else tmp.direct = 1;

             if ( Find != -1 )
             {
                 ARROW[ Find ] = tmp;
             } else ARROW.push_back( tmp );
    }

    //Sword man
    if ( EType[ i ] == 5 )
    if ( EAttack[i] == 40 )
    {
             EnemyDealDamage( rEX, rEY, 30 );
    }
}

void EnemyDoDefend( int i )
{
    if ( ECDDefend[i] > 0 ) { ECDDefend[i] --; return; }

    if ( EType[i] == 3 )
    {
        if ( EAttack[i] > 0 ) return;

        if ( abs( rX - rEX ) <= AttackRange )
        {
            EDefend[i] = 40;
            EMove[i] = 0;
            EIndle[i] = 0;
            ECDDefend[i] = EMaxCDDefend[i];
        }
    }
}

void ProcessEnemy()
{
     rX = X + 8; rY = Y - 1;

     for (int i = 0; i < ECap; ++i )
     if ( enemy[ i ].x != -1 )
     {
         rEX = enemy[i].x + EXPlus[i]; rEY = enemy[i].y;

         //Enemy time move
         if ( ETimeMove[i] > 0 ) ETimeMove[i] -- ;

         //Enemy Action
         if ( ETimeChange[i] <= 0 )
         {
            ETimeChange[i] = EMaxTimeChange[i];
            //random number
            a = random( 1, 11 );

            if ( a % 2 == 1 )
            {
                ETimeMove[i] += a * 25 + 200;
                if ( ETimeMove[i] > EMaxTimeChange[i] ) ETimeMove[i] = EMaxTimeChange[i];
            }

         } else ETimeChange[i] --;

         //Enemy Indle
         if ( EMove[i] <= 0 && EAttack[i] <= 0 && EDefend[i] <= 0 )
         {
             EIndle[i] ++;
             if ( EIndle[i] >= 101) EIndle[i] = 1;
         }

         if ( EAttackSpeed[i] > 0 ) EAttackSpeed[i] -- ;

         EnemyDoAttack( i );

         //Enemy Move
         if ( ESpeed[i] > 0 ) ESpeed[i] --;

         if ( ESpeed[i] <= 0 && ETimeMove[i] > 0 && EAttack[i] <= 0 )
         {
             if ( abs( rEX - rX ) > ERange[ i ] )
             {
               if ( rEX < rX )
               {
                   EDirect[i] = 1; ESpeed[i] = EMaxSpeed[i]; enemy[i].x += 2;
                   if ( EMove[i] <= 0)
                   {
                       EMove[i] = 80; EAttack[i] = 0; EDefend[i] = 0; EIndle[i] = 0;
                   }
               } else
               if ( rEX > rX )
               {
                   EDirect[i] = 2; ESpeed[i] = EMaxSpeed[i]; enemy[i].x -= 2;
                   if ( EMove[i] <= 0 )
                   {
                       EMove[i] = 80; EAttack[i] = 0; EDefend[i] = 0; EIndle[i] = 0;
                   }
               }

             }
         }

         //Enemy Deal damamge
         EnemyDoDamage( i );

         //Enemy Defend
         EnemyDoDefend( i );

     }
}
