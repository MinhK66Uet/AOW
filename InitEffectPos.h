#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <vector>

enum hitted
{
    HittedLeft,
    HittedRight
};

SDL_Rect HittedPos[15];

SDL_Rect HealPos[11], RootedPos[6];

void InitEffectPos()
{
    //hitted
    HittedPos[HittedLeft].x = 0;
    HittedPos[HittedLeft].y = 0;
    HittedPos[HittedLeft].w = 39;
    HittedPos[HittedLeft].h = 42;

    HittedPos[HittedRight].x = 40;
    HittedPos[HittedRight].y = 0;
    HittedPos[HittedRight].w = 39;
    HittedPos[HittedRight].h = 42;

    //healing
    HealPos[1].x = 0;
    HealPos[1].y = 0;
    HealPos[1].w = 9;
    HealPos[1].h = 14;

    for (int i = 2; i <= 10; ++i)
    {
        HealPos[i].x = HealPos[i - 1].x + HealPos[1].w + 1;
        HealPos[i].y = HealPos[i - 1].y ;
        HealPos[i].w = 9;
        HealPos[i].h = 14;
    }

    //Rooted
    RootedPos[1].x = 0;
    RootedPos[1].y = 0;
    RootedPos[1].w = 38;
    RootedPos[1].h = 62;

    for (int i = 2; i <= 5; ++i)
    {
        RootedPos[i].x = RootedPos[i - 1].x + RootedPos[1].w + 1;
        RootedPos[i].y = RootedPos[i - 1].y ;
        RootedPos[i].w = 38;
        RootedPos[i].h = 62;
    }

    return;
}






