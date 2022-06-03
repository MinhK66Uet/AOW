#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

void resetall()
{
    Move = 0; Attack = 0; Defend = 0; direct = 1; MaxSpeed = 2; Speed = 0;

    SaveDeadth.clear();
    SaveHitted.clear();
    SaveHealing.clear();

    resetEnemy();
}
