#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>

int const ECap = 101;

struct POS
{
    int x, y, w, h;
};

POS enemy[ECap];
int EMove[ECap], ESpeed[ECap], EAttack[ECap], EDefend[ECap], EIndle[ECap] , EMaxSpeed[ECap], EDirect[ECap], EAttackSpeed[ECap], EMaxAttackSpeed[ECap];
int EType[ECap], ECDDefend[ECap], EMaxCDDefend[ECap] , ETypeAttack[ECap];

//Time to respawn Enemy
int ERespawn = 0, EMaxRespawn = 1000;
int EHP[ECap], EMaxHP[ECap];
int EXPlus[ECap], EYPlus[ECap], ERange[ECap];

//Time to change enemy action
int ETimeChange[ECap] , EMaxTimeChange[ECap], ETimeMove[ECap];

void resetEnemy()
{
    for (int i = 0; i <= 100; ++i) enemy[i] = { -1, -1 , -1, -1};
}

