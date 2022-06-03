#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

enum ButtonSpeed
{
    x1speed1,
    x2speed1,
    x4speed1,
    x1speed2,
    x2speed2,
    x4speed2
};

SDL_Rect ButtonSpeedPos[10];

void InitButtonPos()
{
    ButtonSpeedPos[x1speed1].x = 0;
    ButtonSpeedPos[x1speed1].y = 0;
    ButtonSpeedPos[x1speed1].w = 18;
    ButtonSpeedPos[x1speed1].h = 16;

    ButtonSpeedPos[x2speed1].x = 19;
    ButtonSpeedPos[x2speed1].y = 0;
    ButtonSpeedPos[x2speed1].w = 18;
    ButtonSpeedPos[x2speed1].h = 16;

    ButtonSpeedPos[x4speed1].x = 19 * 2;
    ButtonSpeedPos[x4speed1].y = 0;
    ButtonSpeedPos[x4speed1].w = 18;
    ButtonSpeedPos[x4speed1].h = 16;

    ButtonSpeedPos[x1speed2].x = 19 * 3;
    ButtonSpeedPos[x1speed2].y = 0;
    ButtonSpeedPos[x1speed2].w = 18;
    ButtonSpeedPos[x1speed2].h = 16;

    ButtonSpeedPos[x2speed2].x = 19 * 4;
    ButtonSpeedPos[x2speed2].y = 0;
    ButtonSpeedPos[x2speed2].w = 18;
    ButtonSpeedPos[x2speed2].h = 16;

    ButtonSpeedPos[x4speed2].x = 19 * 5;
    ButtonSpeedPos[x4speed2].y = 0;
    ButtonSpeedPos[x4speed2].w = 18;
    ButtonSpeedPos[x4speed2].h = 16;
}

SDL_Rect NumberPos[11];

void InitNumberPos()
{
    NumberPos[1].x = 0;
    NumberPos[1].y = 0;
    NumberPos[1].w = 17;
    NumberPos[1].h = 20;

    NumberPos[2].x = 18;
    NumberPos[2].y = 0;
    NumberPos[2].w = 17;
    NumberPos[2].h = 20;

    NumberPos[3].x = 18 * 2;
    NumberPos[3].y = 0;
    NumberPos[3].w = 17;
    NumberPos[3].h = 20;

    NumberPos[4].x = 18 * 3;
    NumberPos[4].y = 0;
    NumberPos[4].w = 17;
    NumberPos[4].h = 20;

    NumberPos[5].x = 18 * 4;
    NumberPos[5].y = 0;
    NumberPos[5].w = 17;
    NumberPos[5].h = 20;

    NumberPos[6].x = 18 * 5;
    NumberPos[6].y = 0;
    NumberPos[6].w = 17;
    NumberPos[6].h = 20;

    NumberPos[7].x = 18 * 6;
    NumberPos[7].y = 0;
    NumberPos[7].w = 17;
    NumberPos[7].h = 20;

    NumberPos[8].x = 0;
    NumberPos[8].y = 21;
    NumberPos[8].w = 17;
    NumberPos[8].h = 20;

    NumberPos[9].x = 18;
    NumberPos[9].y = 21;
    NumberPos[9].w = 17;
    NumberPos[9].h = 20;

    NumberPos[0].x = 18 * 2;
    NumberPos[0].y = 21;
    NumberPos[0].w = 17;
    NumberPos[0].h = 20;
}
