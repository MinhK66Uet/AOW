#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "ProcessPlayer.h"

void RenderPlayer()
{
    if ( Move <= 0 && Attack <= 0 && Defend <= 0)
               {
                   Indle ++;
                   if ( Indle >= 101 ) Indle = 1;
               }

               if ( Indle > 0)
               {
                   if ( direct == 1 )
                   {
                      if (Indle <= 51) Warrior.render( WarriorPos[ IndleTallRight ].x, WarriorPos[ IndleTallRight ].y, WarriorPos[ IndleTallRight ].w, WarriorPos[ IndleTallRight ].h, X, Y, W, H );
                      else Warrior.render( WarriorPos[ IndleShortRight ].x, WarriorPos[ IndleShortRight ].y, WarriorPos[ IndleShortRight ].w, WarriorPos[ IndleShortRight ].h, X, Y, W, H );
                   }
                   if ( direct == 2 )
                   {
                      if (Indle <= 51) Warrior.render( WarriorPos[ IndleTallLeft ].x, WarriorPos[ IndleTallLeft ].y, WarriorPos[ IndleTallLeft ].w, WarriorPos[ IndleTallLeft ].h, X, Y, W, H );
                      else Warrior.render( WarriorPos[ IndleShortLeft ].x, WarriorPos[ IndleShortLeft ].y, WarriorPos[ IndleShortLeft ].w, WarriorPos[ IndleShortLeft ].h, X, Y, W, H );
                   }
               }

               if ( Move > 0 )
               {
                   Move -- ;
                   if ( direct == 1 )
                   {
                      if ( Move > 25 ) Warrior.render( WarriorPos[ WalkRight1 ].x, WarriorPos[ WalkRight1 ].y, WarriorPos[ WalkRight1 ].w, WarriorPos[ WalkRight1 ].h, X, Y, W, H );
                      else Warrior.render( WarriorPos[ WalkRight2 ].x, WarriorPos[ WalkRight2 ].y, WarriorPos[ WalkRight2 ].w, WarriorPos[ WalkRight2 ].h, X, Y, W, H );
                   }
                   if ( direct == 2 )
                   {
                      if ( Move > 25 ) Warrior.render( WarriorPos[ WalkLeft1 ].x, WarriorPos[ WalkLeft1 ].y, WarriorPos[ WalkLeft1 ].w, WarriorPos[ WalkLeft1 ].h, X, Y, W, H );
                      else Warrior.render( WarriorPos[ WalkLeft2 ].x, WarriorPos[ WalkLeft2 ].y, WarriorPos[ WalkLeft2 ].w, WarriorPos[ WalkLeft2 ].h, X, Y, W, H );
                   }
               }

               if ( Attack > 0 )
               {
                   Attack -- ;
                   if ( direct == 1 )
                   {
                      Warrior.render( WarriorPos[ AttackRight ].x, WarriorPos[ AttackRight ].y, WarriorPos[ AttackRight ].w, WarriorPos[ AttackRight ].h, X, Y, W, H );
                   }
                   if ( direct == 2 )
                   {
                      Warrior.render( WarriorPos[ AttackLeft ].x, WarriorPos[ AttackLeft ].y, WarriorPos[ AttackLeft ].w, WarriorPos[ AttackLeft ].h, X, Y, W, H );
                   }
               }

               if ( Defend > 0 )
               {
                   Defend -- ;
                   if ( direct == 1 )
                   {
                      Warrior.render( WarriorPos[ DefendRight ].x, WarriorPos[ DefendRight ].y, WarriorPos[ DefendRight ].w, WarriorPos[ DefendRight ].h, X, Y, W, H );
                   }
                   if ( direct == 2 )
                   {
                      Warrior.render( WarriorPos[ DefendLeft ].x, WarriorPos[ DefendLeft ].y, WarriorPos[ DefendLeft ].w, WarriorPos[ DefendLeft ].h, X, Y, W, H );
                   }
               }
}
