#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "InitArrow.h"

void SpawnArrow(int team, int i, int type, int x = -1, int y = -1)
{
     sArrow NewArrow;

     int xTroop = Troop[team][i].x, yTroop = Troop[team][i].y;

    xTroop = xTroop + Troop[team][i]._x;

     if (type == 1)
     {
         if (x != -1) NewArrow.x = x; else NewArrow.x = xTroop;
         if (y != -1) NewArrow.y = y; else NewArrow.y = yTroop;
         NewArrow.type = 1;
         NewArrow.range = 500;
         NewArrow.moverange = 3;
         NewArrow.owner = i;
         NewArrow.team = team;
         NewArrow.speed = 0;
         NewArrow.maxspeed = 0;
         NewArrow.bspeed = NewArrow.maxspeed;
         NewArrow.w = 22;
         NewArrow.h = 5;
         NewArrow.hitbox = 7;
     } else
     //Gold arrow
     if (type == 2)
     {
         if (x != -1) NewArrow.x = x; else NewArrow.x = xTroop;
         if (y != -1) NewArrow.y = y; else NewArrow.y = yTroop;
         NewArrow.type = 2;
         NewArrow.range = 700;
         NewArrow.moverange = 3;
         NewArrow.owner = i;
         NewArrow.team = team;
         NewArrow.speed = 0;
         NewArrow.maxspeed = 0;
         NewArrow.bspeed = NewArrow.maxspeed;
         NewArrow.w = 22;
         NewArrow.h = 5;
         NewArrow.hitbox = 7;
     }

     int j = -1;

     for (int k = 0; k < Arrow[team].size(); ++k )
     if (Arrow[team][k].x == -1)
     {
        j = k;
        break;
     }

     if (j == -1) Arrow[team].push_back(NewArrow); else
     {
         Arrow[team][j] = NewArrow;
     }

     return;
}
