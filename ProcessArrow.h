#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "InitArrow.h"
#include "spawneffect.h"

void DeleteArrow(int team, int i)
{
    Arrow[team][i].x = -1;
    Arrow[team][i].y = -1;
    Arrow[team][i].w = -1;
    Arrow[team][i].h = -1;
    Arrow[team][i].owner = -1;
}

void ArrowDealDamage(int team,int i,int j)
{
    if (Arrow[team][i].type == 1)
    {
         //base
         if (j == CBASE)
         {
            Base[3 - team].physicdmg += (10 * (100 + Archery[team] * 10) / 100);
            DeleteArrow(team,i);
            return;
         }

        Troop[3 - team][j].rphysicdmg += (10 * (100 + Archery[team] * 10) / 100);
        int x = Troop[3 - team][j].x + Troop[3 - team][j]._x, y = Troop[3 - team][j].y + Troop[3 - team][j]._y;

        if (Arrow[team][i].owner != -1)
        {
            Troop[team][ Arrow[team][i].owner ].heal += Troop[team][ Arrow[team][i].owner ].lifesteal * (10 * (100 + Archery[team] * 10) / 100) * 100 / (100 + Troop[3 - team][j].armor) / 100;
        }

        DeleteArrow(team,i);
        SpawnEffect(3 - team, x, y, 40, 40, 1, 15);
        return;
    } else
    //gold arrow
    if (Arrow[team][i].type == 2)
    {
         //base
         if (j == CBASE)
         {
            int tmp = (700 - Arrow[team][i].range) / 25 + Base[3 - team].armor * 38 / 100;
            Base[3 - team].physicdmg += ((20 + tmp) * (100 + Archery[team] * 10) / 100);
            DeleteArrow(team,i);
            return;
         }

        int tmp = (700 - Arrow[team][i].range) / 25 + Troop[3 - team][j].armor * 38 / 100;
        Troop[3 - team][j].rphysicdmg += ((20 + tmp) * (100 + Archery[team] * 10) / 100);
        int x = Troop[3 - team][j].x + Troop[3 - team][j]._x, y = Troop[3 - team][j].y + Troop[3 - team][j]._y;

        if (Arrow[team][i].owner != -1)
        {
            Troop[team][ Arrow[team][i].owner ].heal += Troop[team][ Arrow[team][i].owner ].lifesteal * ((20 + tmp) * (100 + Archery[team] * 10) / 100) * 100 / (100 + Troop[3 - team][j].armor) / 100;
        }

        DeleteArrow(team,i);
        SpawnEffect(3 - team, x, y, 40, 40, 1, 15);
        return;
    }
}

int FindArrow(int team, int i )
{
    int x = Arrow[team][i].x , y = Arrow[team][i].y;

    int hitbox = Arrow[team][i].hitbox;

    int res = -1;

    if (team == 1)
    {
       for (int j = 0; j < Troop[2].size(); ++j)
       {
            int _x = Troop[2][j].x + Troop[2][j]._x;
            if (_x < x) continue;
            if (abs(_x - x) <= hitbox) {res = j; break;}
       }
    } else
    {
       for (int j = 0; j < Troop[1].size(); ++j)
       {
            int _x = Troop[1][j].x + Troop[1][j]._x;
            if (_x > x) continue;
            if (abs(_x - x) <= hitbox) {res = j; break;}
       }
    }

    return res;
}

void ProcessArrow(int team ,int i)
{
    //delete owner
    int owner = Arrow[team][i].owner;
    if (Troop[team][owner].x == -1 || Troop[team][owner].hp <=0) Arrow[team][i].owner = -1;

    //find troop nearest arrow
    int j = FindArrow(team,i);

    //finded nearest troop
    if (j != -1)
    {
        ArrowDealDamage(team,i,j);
    } else
    {
         int xBase = 130; int x = Arrow[team][i].x;
         if (team == 1) xBase = 2855;
         if (abs(x - xBase) <= Arrow[team][i].hitbox)
         {
             ArrowDealDamage(team,i,CBASE);
         }
    }

    if (Arrow[team][i].range <= 0) DeleteArrow(team,i);


    //arrow has been deleted
    if (Arrow[team][i].x == -1) return;

    if (Arrow[team][i].speed > 0) Arrow[team][i].speed --;

    if (Arrow[team][i].speed <= 0)
    {
        Arrow[team][i].speed = Arrow[team][i].maxspeed;

        int val = 1;
        if (team == 2) val = -1;

        Arrow[team][i].x += Arrow[team][i].moverange * val;
        Arrow[team][i].range --;
    }


    return;
}

