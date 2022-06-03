#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

struct sEffect
{
    int x, y,
    time,
    type,
    team,
    maxtime,
    w,h;
};

vector < sEffect > Effect;

void InitEffect()
{
     Effect.clear();
}
