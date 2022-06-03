#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "InitBasepos.h"
#include "InitBase.h"

void BaseTakeDamage(int team)
{
    Base[team].hp -= Base[team].physicdmg * 100 / (100 + Base[team].armor);
    Base[team].hp -= Base[team].magicdmg * 100 / (100 + Base[team].resistant);
    Base[team].hp -= Base[team].truedmg;

    Base[team].physicdmg = 0;
    Base[team].magicdmg = 0;
    Base[team].truedmg = 0;
}

void ProcessBase()
{
    for (int i = 1; i <= 2; ++i)
    {
        BaseTakeDamage(i);
    }
}
