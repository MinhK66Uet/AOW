#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "ResetEnemy.h"
#include "InitSDL.h"

void deleteEnemy( int i )
{
    //animation deadth
    int Find = -1;
    for (int j = 0; j < SaveDeadth.size(); ++ j)
     if ( SaveDeadth[j].time == -1)
     {
        Find = j;
        break;
     }

    if ( Find != -1 )
    {
        SaveDeadth[Find].x = enemy[i].x + EXPlus[i];
        SaveDeadth[Find].y = enemy[i].y + EYPlus[i];
        SaveDeadth[Find].w = enemy[i].w - 3;
        SaveDeadth[Find].h = enemy[i].h - 3;
        SaveDeadth[Find].time = 20;
    } else
    {
        Deadth tmp;
        tmp.x = enemy[i].x + EXPlus[i];
        tmp.y = enemy[i].y + EYPlus[i];
        tmp.w = enemy[i].w - 3;
        tmp.h = enemy[i].h - 3;
        tmp.time = 20;
        SaveDeadth.push_back( tmp );
    }

    enemy[i].x = -1;
    enemy[i].y = -1;
    enemy[i].w = -1;
    enemy[i].h = -1;

    EMove[i] = -1;
    EAttack[i] = -1;
    EDefend[i] = -1;
    EIndle[i] = -1;
    ESpeed[i] = -1;
    EMaxSpeed[i] = -1;
    EDirect[i] = -1;
    EAttackSpeed[i] = -1;
    EMaxAttackSpeed[i] = -1;
    ETimeChange[i] = -1;
    EMaxTimeChange[i] = -1;
    EType[i] = -1;
    ETimeMove[i] = -1;
    EHP[i] = -1;
    EMaxHP[i] = -1;
}

