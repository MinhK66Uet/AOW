#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

enum ElfBase
{
    ElfBase1Left,
    ElfBase1Right
};

SDL_Rect ElfBasePos[15];

void InitBasePos()
{
    ElfBasePos[ElfBase1Left].x = 0;
    ElfBasePos[ElfBase1Left].y = 0;
    ElfBasePos[ElfBase1Left].w = 70;
    ElfBasePos[ElfBase1Left].h = 100;

    ElfBasePos[ElfBase1Right].x = 0;
    ElfBasePos[ElfBase1Right].y = 102;
    ElfBasePos[ElfBase1Right].w = 70;
    ElfBasePos[ElfBase1Right].h = 100;
}
