#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "InitEffectPos.h"
#include "InitEffect.h"

void DeleteEffect(int i)
{
    Effect[i].x = -1;
    Effect[i].y = -1;
    Effect[i].w = -1;
    Effect[i].h = -1;
}

void ProcessEffect(int i)
{
     Effect[i].time --;

     if (Effect[i].time <= 0)
     {
         DeleteEffect(i);
         return;
     }
}
