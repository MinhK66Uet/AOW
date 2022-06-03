#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "InitTroop.h"
#include "random.h"
#include "InitCostTroop.h"

void SpawnTroop(int team, int x, int y, int type, int hp, bool cost = true)
{
     if (cost == true)
     {
         if (Gold[team] < Cost[type].gold) return;
         Gold[team] -= Cost[type].gold;
     }

     sTroop NewTroop;

     //sharpshooter
     if (type == 1)
     {
        NewTroop.type = 1;
        if (hp == -1) NewTroop.hp = 50; else NewTroop.hp = hp;
        if (x == -1)
        {
           if (team == 1) NewTroop.x = 140; else NewTroop.x = 2845;
           NewTroop.y = ySpawn;
        }
        NewTroop.w = 70;
        NewTroop.h = 80;
        NewTroop.indle = 0;
        NewTroop.maxindle = 50;
        NewTroop._x = 10;
        NewTroop._y = 20;
        NewTroop.yplus = 0;
        NewTroop.speed = 0;
        NewTroop.maxspeed = 30;
        NewTroop.bspeed = NewTroop.maxspeed;
        NewTroop.moverange = 5;
        NewTroop.range = 500;
        NewTroop.attackspeed = 0;
        NewTroop.maxattackspeed = 150;
        NewTroop.battackspeed = NewTroop.maxattackspeed;
        NewTroop.armor = 10;
        NewTroop.resistant = 0;
        NewTroop.physicdmg = 0;
        NewTroop.magicdmg = 0;
        NewTroop.truedmg = 0;
        NewTroop.rphysicdmg = 0;
        NewTroop.rmagicdmg = 0;
        NewTroop.rtruedmg = 0;
        NewTroop.barmor = NewTroop.armor;
        NewTroop.bresistant = NewTroop.resistant;
        NewTroop.maxhp = 50;
        NewTroop.lifesteal = 0;
        NewTroop.heal = 0;
        NewTroop.rw = 24;
        NewTroop.rh = 80;
     } else
     //Elf sword
     if (type == 2)
     {
        NewTroop.type = 2;
        if (hp == -1) NewTroop.hp = 125; else NewTroop.hp = hp;
        if (x == -1)
        {
           if (team == 1) NewTroop.x = 140; else NewTroop.x = 2845;
           NewTroop.y = ySpawn;
        }
        NewTroop.w = 71;
        NewTroop.h = 83;
        NewTroop.indle = 0;
        NewTroop.maxindle = 50;
        NewTroop._x = 10;
        NewTroop._y = 20;
        NewTroop.yplus = 3;
        NewTroop.speed = 0;
        NewTroop.maxspeed = 20;
        NewTroop.bspeed = NewTroop.maxspeed;
        NewTroop.moverange = 5;
        NewTroop.range = 26;
        NewTroop.attackspeed = 0;
        NewTroop.maxattackspeed = 90;
        NewTroop.battackspeed = NewTroop.maxattackspeed;
        NewTroop.armor = 23;
        NewTroop.resistant = 0;
        NewTroop.physicdmg = 0;
        NewTroop.magicdmg = 0;
        NewTroop.truedmg = 0;
        NewTroop.rphysicdmg = 0;
        NewTroop.rmagicdmg = 0;
        NewTroop.rtruedmg = 0;
        NewTroop.barmor = NewTroop.armor;
        NewTroop.bresistant = NewTroop.resistant;
        NewTroop.maxhp = 125;
        NewTroop.typeattack = random(1,2);
        NewTroop.lifesteal = 0;
        NewTroop.heal = 0;
        NewTroop.rw = 24;
        NewTroop.rh = 80;
     } else
     //Meric
     if (type == 3)
     {
        NewTroop.type = 3;
        if (hp == -1) NewTroop.hp = 150; else NewTroop.hp = hp;
        if (x == -1)
        {
           if (team == 1) NewTroop.x = 140; else NewTroop.x = 2845;
           NewTroop.y = ySpawn;
        }
        NewTroop.w = 74;
        NewTroop.h = 87;
        NewTroop.indle = 0;
        NewTroop.maxindle = 100;
        NewTroop._x = 10;
        NewTroop._y = 20;
        NewTroop.yplus = 0;
        NewTroop.speed = 0;
        NewTroop.maxspeed = 25;
        NewTroop.bspeed = NewTroop.maxspeed;
        NewTroop.moverange = 5;
        NewTroop.range = 300;
        NewTroop.attackspeed = 0;
        NewTroop.maxattackspeed = 200;
        NewTroop.battackspeed = NewTroop.maxattackspeed;
        NewTroop.armor = 0;
        NewTroop.resistant = 0;
        NewTroop.physicdmg = 0;
        NewTroop.magicdmg = 0;
        NewTroop.truedmg = 0;
        NewTroop.rphysicdmg = 0;
        NewTroop.rmagicdmg = 0;
        NewTroop.rtruedmg = 0;
        NewTroop.barmor = NewTroop.armor;
        NewTroop.bresistant = NewTroop.resistant;
        NewTroop.maxhp = 150;
        NewTroop.typeattack = 0;
        NewTroop.lifesteal = 0;
        NewTroop.heal = 0;
        NewTroop.rw = 24;
        NewTroop.rh = 80;
     } else
     //Elf Soccerer
     if (type == 4)
     {
        NewTroop.type = 4;
        if (hp == -1) NewTroop.hp = 200; else NewTroop.hp = hp;
        if (x == -1)
        {
           if (team == 1) NewTroop.x = 140; else NewTroop.x = 2845;
           NewTroop.y = ySpawn;
        }
        NewTroop.w = 68;
        NewTroop.h = 71;
        NewTroop.indle = 0;
        NewTroop.maxindle = 114;
        NewTroop._x = 10;
        NewTroop._y = 20;
        NewTroop.yplus = 12;
        NewTroop.speed = 0;
        NewTroop.maxspeed = 30;
        NewTroop.bspeed = NewTroop.maxspeed;
        NewTroop.moverange = 5;
        NewTroop.range = 300;
        NewTroop.attackspeed = 0;
        NewTroop.maxattackspeed = 1500;
        NewTroop.battackspeed = NewTroop.maxattackspeed;
        NewTroop.armor = 20;
        NewTroop.resistant = 20;
        NewTroop.physicdmg = 0;
        NewTroop.magicdmg = 0;
        NewTroop.truedmg = 0;
        NewTroop.rphysicdmg = 0;
        NewTroop.rmagicdmg = 0;
        NewTroop.rtruedmg = 0;
        NewTroop.barmor = NewTroop.armor;
        NewTroop.bresistant = NewTroop.resistant;
        NewTroop.maxhp = 200;
        NewTroop.typeattack = 0;
        NewTroop.lifesteal = 0;
        NewTroop.heal = 0;
        NewTroop.rw = 24;
        NewTroop.rh = 80;
     } else
      //butcher
     if (type == 5)
     {
        NewTroop.type = 5;
        if (hp == -1) NewTroop.hp = 300; else NewTroop.hp = hp;
        if (x == -1)
        {
           if (team == 1) NewTroop.x = 140; else NewTroop.x = 2845;
           NewTroop.y = ySpawn;
        }
        NewTroop.w = 83;
        NewTroop.h = 80;
        NewTroop.indle = 0;
        NewTroop.maxindle = 50;
        NewTroop._x = 21;
        NewTroop._y = 20;
        NewTroop.yplus = 6;
        NewTroop.speed = 0;
        NewTroop.maxspeed = 24;
        NewTroop.bspeed = NewTroop.maxspeed;
        NewTroop.moverange = 5;
        NewTroop.range = 30;
        NewTroop.attackspeed = 0;
        NewTroop.maxattackspeed = 100;
        NewTroop.battackspeed = NewTroop.maxattackspeed;
        NewTroop.armor = 70;
        NewTroop.resistant = 40;
        NewTroop.physicdmg = 0;
        NewTroop.magicdmg = 0;
        NewTroop.truedmg = 0;
        NewTroop.rphysicdmg = 0;
        NewTroop.rmagicdmg = 0;
        NewTroop.rtruedmg = 0;
        NewTroop.barmor = NewTroop.armor;
        NewTroop.bresistant = NewTroop.resistant;
        NewTroop.maxhp = 300;
        NewTroop.typeattack = 1;
        NewTroop.lifesteal = 20;
        NewTroop.heal = 0;
        NewTroop.rw = 24;
        NewTroop.rh = 80;
     } else
     //gold sharpshooter
     if (type == 6)
     {
        NewTroop.type = 6;
        if (hp == -1) NewTroop.hp = 100; else NewTroop.hp = hp;
        if (x == -1)
        {
           if (team == 1) NewTroop.x = 140; else NewTroop.x = 2845;
           NewTroop.y = ySpawn;
        }
        NewTroop.w = 70;
        NewTroop.h = 80;
        NewTroop.indle = 0;
        NewTroop.maxindle = 50;
        NewTroop._x = 10;
        NewTroop._y = 20;
        NewTroop.yplus = 0;
        NewTroop.speed = 0;
        NewTroop.maxspeed = 30;
        NewTroop.bspeed = NewTroop.maxspeed;
        NewTroop.moverange = 5;
        NewTroop.range = 650;
        NewTroop.attackspeed = 0;
        NewTroop.maxattackspeed = 150;
        NewTroop.battackspeed = NewTroop.maxattackspeed;
        NewTroop.armor = 30;
        NewTroop.resistant = 30;
        NewTroop.physicdmg = 0;
        NewTroop.magicdmg = 0;
        NewTroop.truedmg = 0;
        NewTroop.rphysicdmg = 0;
        NewTroop.rmagicdmg = 0;
        NewTroop.rtruedmg = 0;
        NewTroop.barmor = NewTroop.armor;
        NewTroop.bresistant = NewTroop.resistant;
        NewTroop.maxhp = 100;
        NewTroop.lifesteal = 0;
        NewTroop.heal = 0;
        NewTroop.rw = 24;
        NewTroop.rh = 80;
     }

     //Special Effect
     NewTroop.rooted = 0;

     //Update Effect
     NewTroop.maxhp += NewTroop.maxhp * HitPoint[team] * 10 / 100;
     if (hp == -1) NewTroop.hp = NewTroop.maxhp;

     NewTroop.armor += NewTroop.armor * Defensive[team] * 15 / 100;

     int i = -1;
     for (int j = 0; j < Troop[team].size(); ++j )
      if (Troop[team][j].x <= -1)
     {
         i = j;
         break;
     }

     if ( i < Troop[team].size() )
     {
         Troop[team][i] = NewTroop;
     } else
     Troop[team].push_back( NewTroop );

     return;
}
