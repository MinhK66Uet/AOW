#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

int TroopBlock[3][11];

void InitTroopBlock()
{
    for (int i = 1; i <= 2; ++i)
    {
        TroopBlock[i][1] = 2;
        TroopBlock[i][2] = 1;
        TroopBlock[i][3] = 3;
        TroopBlock[i][4] = 4;
        TroopBlock[i][5] = 6;
    }
}

