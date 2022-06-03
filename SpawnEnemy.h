#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "ResetEnemy.h"
#include "random.h"

int SIDE = 1;

void SpawnEnemy()
{
    if ( ERespawn > 0 ) ERespawn --; else
    {
      bool success = false;
      for (int i = 0; i < ECap; ++i)
      if (enemy[i].x == -1)
      {
        int b = random( 1, 12 ); if ( b % 2 == 1) b = 4; else b = 5;
        //Sword man
        if (b == 1)
        {
          int a = random( 1, 100 );

          a = SIDE;

          if ( a % 2 == 0)  enemy[i].x = 0;
          else enemy[i].x = SCREEN_WIDTH - 51;

          enemy[i].y = SCREEN_HEIGHT / 4 + 170;
          enemy[i].w = 50;
          enemy[i].h = 46;
          EMove[i] = 0;
          EAttack[i] = 0;
          EDefend[i] = 0;
          EIndle[i] = 0;
          ESpeed[i] = 0;
          EMaxSpeed[i] = 8;
          EDirect[i] = 2;
          EAttackSpeed[i] = 0;
          EMaxAttackSpeed[i] = 300;
          ETimeChange[i] = 0;
          EMaxTimeChange[i] = 300;
          EType[i] = 1;
          ETimeMove[i] = 0;
          EHP[i] = 1;
          EMaxHP[i] = 1;
          EXPlus[i] = 8;
          EYPlus[i] = 0;
          ERange[i] = 27;
          ECDDefend[i] = 0;
          EMaxCDDefend[i] = 0;

          success = true;
          break;
        } else
        //Archer
        if (b == 2)
        {
          int a = random( 1, 10 );

          a = SIDE;

          if ( a % 2 == 0)  enemy[i].x = 0;
          else enemy[i].x = SCREEN_WIDTH - 51;

          enemy[i].y = SCREEN_HEIGHT / 4 + 170;
          enemy[i].w = 50;
          enemy[i].h = 46;
          EMove[i] = 0;
          EAttack[i] = 0;
          EDefend[i] = 0;
          EIndle[i] = 0;
          ESpeed[i] = 0;
          EMaxSpeed[i] = 12;
          EDirect[i] = 2;
          EAttackSpeed[i] = 0;
          EMaxAttackSpeed[i] = 500;
          ETimeChange[i] = 0;
          EMaxTimeChange[i] = 300;
          EType[i] = 2;
          ETimeMove[i] = 0;
          EHP[i] = 1;
          EMaxHP[i] = 1;
          EXPlus[i] = 7;
          EYPlus[i] = 0;
          ERange[i] = 200;
          ECDDefend[i] = 0;
          EMaxCDDefend[i] = 0;

          success = true;
          break;
        } else
        //Spear
        if ( b == 3 )
        {
          int a = random( 1, 10 );

          a = SIDE;

          if ( a % 2 == 0 )  enemy[i].x = 0;
          else enemy[i].x = SCREEN_WIDTH - 51;

          enemy[i].y = SCREEN_HEIGHT / 4 + 170;
          enemy[i].w = 75;
          enemy[i].h = 46;
          EMove[i] = 0;
          EAttack[i] = 0;
          EDefend[i] = 0;
          EIndle[i] = 0;
          ESpeed[i] = 0;
          EMaxSpeed[i] = 5;
          EDirect[i] = 2;
          EAttackSpeed[i] = 0;
          EMaxAttackSpeed[i] = 400;
          ETimeChange[i] = 0;
          EMaxTimeChange[i] = 300;
          EType[i] = 3;
          ETimeMove[i] = 0;
          EHP[i] = 2;
          EMaxHP[i] = 2;
          EXPlus[i] = 17;
          EYPlus[i] = 0;
          ERange[i] = 29;
          ECDDefend[i] = 0;
          EMaxCDDefend[i] = 100;

          success = true;
          break;
        } else
        //SharpSHooter
        if ( b == 4 )
        {
          int a = random( 1, 10 );

          a = SIDE;

          if ( a % 2 == 0)  enemy[i].x = 0;
          else enemy[i].x = SCREEN_WIDTH - 51;

          enemy[i].y = SCREEN_HEIGHT / 4 + 170;
          enemy[i].w = 72;
          enemy[i].h = 65;
          EMove[i] = 0;
          EAttack[i] = 0;
          EDefend[i] = 0;
          EIndle[i] = 0;
          ESpeed[i] = 0;
          EMaxSpeed[i] = 9;
          EDirect[i] = 2;
          EAttackSpeed[i] = 0;
          EMaxAttackSpeed[i] = 350;
          ETimeChange[i] = 0;
          EMaxTimeChange[i] = 119;
          EType[i] = 4;
          ETimeMove[i] = 0;
          EHP[i] = 2;
          EMaxHP[i] = 2;
          EXPlus[i] = 20;
          EYPlus[i] = 0;
          ERange[i] = 300;
          ECDDefend[i] = 0;
          EMaxCDDefend[i] = 0;

          success = true;
          break;
        } else
        //ElfSwordMan
        if ( b == 5 )
        {
          int a = random( 1, 10 );

          a = SIDE;

          if ( a % 2 == 0)  enemy[i].x = 0;
          else enemy[i].x = SCREEN_WIDTH - 51;

          enemy[i].y = SCREEN_HEIGHT / 4 + 170;
          enemy[i].w = 71;
          enemy[i].h = 66;
          EMove[i] = 0;
          EAttack[i] = 0;
          EDefend[i] = 0;
          EIndle[i] = 0;
          ESpeed[i] = 0;
          EMaxSpeed[i] = 9;
          EDirect[i] = 2;
          EAttackSpeed[i] = 0;
          EMaxAttackSpeed[i] = 300;
          ETimeChange[i] = 0;
          EMaxTimeChange[i] = 400;
          EType[i] = 5;
          ETimeMove[i] = 0;
          EHP[i] = 2;
          EMaxHP[i] = 2;
          EXPlus[i] = 18;
          EYPlus[i] = 0;
          ERange[i] = 30;
          ECDDefend[i] = 0;
          EMaxCDDefend[i] = 0;

          success = true;
          break;
        }
      }
      if ( success == true ) {ERespawn = EMaxRespawn; SIDE = 3 - SIDE;}
    }
}
