#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

struct sBase
{
    int hp , maxhp, armor, resistant, physicdmg, magicdmg, truedmg;
};

sBase Base[3];

void InitBase()
{
     Base[1].hp = 1000;
     Base[1].maxhp = 1000;
     Base[1].armor = 50;
     Base[1].resistant = 20;
     Base[1].physicdmg = 0;
     Base[1].magicdmg = 0;
     Base[1].truedmg = 0;

     Base[2].hp = 1000;
     Base[2].maxhp = 1000;
     Base[2].armor = 50;
     Base[2].resistant = 20;
     Base[2].physicdmg = 0;
     Base[2].magicdmg = 0;
     Base[2].truedmg = 0;
}

