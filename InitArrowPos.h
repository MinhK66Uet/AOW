#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

enum arrow
{
    ArrowLeft,
    ArrowRight
};

SDL_Rect ArrowPos[15];

void InitArrowPos()
{
    ArrowPos[ArrowLeft].x = 0;
    ArrowPos[ArrowLeft].y = 0;
    ArrowPos[ArrowLeft].w = 10;
    ArrowPos[ArrowLeft].h = 4;

    ArrowPos[ArrowRight].x = 11;
    ArrowPos[ArrowRight].y = 0;
    ArrowPos[ArrowRight].w = 10;
    ArrowPos[ArrowRight].h = 4;
}

enum goldarrow
{
    GoldArrowLeft,
    GoldArrowRight
};

SDL_Rect GoldArrowPos[15];

void InitGoldArrowPos()
{
    GoldArrowPos[GoldArrowLeft].x = 0;
    GoldArrowPos[GoldArrowLeft].y = 0;
    GoldArrowPos[GoldArrowLeft].w = 10;
    GoldArrowPos[GoldArrowLeft].h = 4;

    GoldArrowPos[GoldArrowRight].x = 11;
    GoldArrowPos[GoldArrowRight].y = 0;
    GoldArrowPos[GoldArrowRight].w = 10;
    GoldArrowPos[GoldArrowRight].h = 4;
}

