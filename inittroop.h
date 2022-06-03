#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

const int ySpawn = 484;

struct sTroop
{
    int hp, maxhp,
    armor, resistant, barmor, bresistant,
    speed, maxspeed, bspeed,
    attackspeed, battackspeed, maxattackspeed,
    indle, maxindle,
    range,
    moverange,
    type,
    w,h,
    rw,rh,
    _x,_y,
    yplus,
    x, y,
    rooted,
    typeattack,
    physicdmg, truedmg, magicdmg,
    lifesteal,heal,
    rphysicdmg, rtruedmg, rmagicdmg;
    bool attacking,moving;
};

vector <sTroop> Troop[3];

void InitTroop()
{
    for (int i = 1; i<= 2; ++i)
     Troop[i].clear();
}

