#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

struct sArrow
{
    int x, y,
    w,h,
    type,
    speed, maxspeed, bspeed,
    moverange,
    range,
    team,
    hitbox,
    owner;
};

vector <sArrow> Arrow[5];

void InitArrow()
{
    for (int i = 1; i <= 2; ++i)
     Arrow[i].clear();
}



