#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "InitEffect.h"

void SpawnEffect(int team, int x, int y, int w, int h, int type, int time )
{
    sEffect NewEffect;
    //hitted
    if (type == 1)
    {
        NewEffect.type = 1;
        NewEffect.x = x;
        NewEffect.y = y;
        NewEffect.w = w;
        NewEffect.h = h;
        NewEffect.time = time;
        NewEffect.team = team;
    } else
    //deadth
    if (type == 2)
    {
        NewEffect.type = 2;
        NewEffect.x = x;
        NewEffect.y = y;
        NewEffect.w = w;
        NewEffect.h = h;
        NewEffect.time = time;
        NewEffect.team = team;
    } else
    //healing
    if (type == 3)
    {
        NewEffect.type = 3;
        NewEffect.x = x;
        NewEffect.y = y;
        NewEffect.w = w;
        NewEffect.h = h;
        NewEffect.time = time;
        NewEffect.team = team;
    } else
    //rooted
    if (type == 4)
    {
        NewEffect.type = 4;
        NewEffect.x = x;
        NewEffect.y = y;
        NewEffect.w = w;
        NewEffect.h = h;
        NewEffect.time = time;
        NewEffect.team = team;
        NewEffect.maxtime = time;
    }

    int j = -1;

    for (int i = 0; i < Effect.size(); ++ i)
    if (Effect[i].x == -1)
    {
        j = i;
        break;
    }

    if (j == -1) Effect.push_back(NewEffect);
    else Effect[j] = NewEffect;

    return;
}
