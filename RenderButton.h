#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "InitTroopBlock.h"
#include "InitButtonPos.h"
#include "ProcessNumber.h"
#include "InitCostTroop.h"
#include "InitCostUpdate.h"
#include "InitUpdate.h"

bool Pause;
int GameSpeed;

void RenderCostTroop(int type)
{
     gGold.render(code, code, code, code, 0, 150, 25, 25);

     vector < int > NumberList = ProcessNumber(Cost[type].gold);

     for (int i = 0; i < NumberList.size(); ++i)
     {
         int a = NumberList[i];
         gNumber.render(NumberPos[a].x, NumberPos[a].y, NumberPos[a].w, NumberPos[a].h, 33 + (i - 1) * 12, 153, 18, 20);
     }
}

void RenderCostUpdate(int type)
{
    int _type = type;

    gGold.render(code, code, code, code, 0, 150, 25, 25);

    int gold = CostUpdate[_type].gold;

    if (_type == 1) gold += CostUpdate[_type].goldplus * Economic[1];
    if (_type == 2) gold += CostUpdate[_type].goldplus * Defensive[1];
    if (_type == 3) gold += CostUpdate[_type].goldplus * Archery[1];
    if (_type == 4) gold += CostUpdate[_type].goldplus * HitPoint[1];
    if (_type == 5) gold += CostUpdate[_type].goldplus * Offensive[1];
    if (_type == 6) gold += CostUpdate[_type].goldplus * Socery[1];

    vector < int > NumberList = ProcessNumber(gold);

    for (int i = 0; i < NumberList.size(); ++i)
     {
         int a = NumberList[i];
         gNumber.render(NumberPos[a].x, NumberPos[a].y, NumberPos[a].w, NumberPos[a].h, 33 + (i - 1) * 12, 153, 18, 20);
     }
}

void RenderIcon(int pos)
{
    int x, y;
    x = 81 + 90 * (pos - 1); y = 44;

    int xm,ym;
    SDL_GetMouseState( &xm, &ym );

    //check if mouse is in the button
    bool ok = false;

    if (xm >= x && xm <= x + 54 && ym >= y && ym <= y + 24) ok = true;

    if (!ok)
    {
      if (TroopBlock[1][pos] == 1) iSharpShooter.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 2) iElfSword.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 3) iMeric.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 4) iElfSoc.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 6) iGoldSharpShooter.render(code, code, code, code, x, y, 54, 24);
    } else
    {
      if (TroopBlock[1][pos] == 1) iSharpShooter2.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 2) iElfSword2.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 3) iMeric2.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 4) iElfSoc2.render(code, code, code, code, x, y, 54, 24);
      if (TroopBlock[1][pos] == 6) iGoldSharpShooter2.render(code, code, code, code, x, y, 54, 24);

      RenderCostTroop(TroopBlock[1][pos]);
    }

}

void RenderButton()
{
     int x, y;
     SDL_GetMouseState( &x, &y);

     //Pause Button
     if (x >= 790 && x <= 790 + 53 && y >= 53 && y <= 53 + 53)
     {
        if (!Pause)
         gPause2.render(code, code, code, code, 790, 33, 53, 53);

        if (Pause)
         gNext2.render(code, code, code, code, 790, 33, 53, 53);
     } else
     {
       if (!Pause)
        gPause.render(code, code, code, code, 790, 33, 53, 53);

       if (Pause)
        gNext.render(code, code, code, code, 790, 33, 53, 53);
     }

     //Troop block
     for (int i = 1; i <= 5; ++i) RenderIcon(i);

     //GameSpeed
     if (x >= 0 && x <= 37 && y >= SCREEN_HEIGHT - 37 && y <= SCREEN_HEIGHT)
     {
       if (GameSpeed == 1) gbuttonspeed.render(ButtonSpeedPos[x1speed2].x, ButtonSpeedPos[x1speed2].y, ButtonSpeedPos[x1speed2].w, ButtonSpeedPos[x1speed2].h, 0, SCREEN_HEIGHT - 37, 37, 37);
       if (GameSpeed == 2) gbuttonspeed.render(ButtonSpeedPos[x2speed2].x, ButtonSpeedPos[x2speed2].y, ButtonSpeedPos[x2speed2].w, ButtonSpeedPos[x2speed2].h, 0, SCREEN_HEIGHT - 37, 37, 37);
       if (GameSpeed == 4) gbuttonspeed.render(ButtonSpeedPos[x4speed2].x, ButtonSpeedPos[x4speed2].y, ButtonSpeedPos[x4speed2].w, ButtonSpeedPos[x4speed2].h, 0, SCREEN_HEIGHT - 37, 37, 37);
     } else
     {
       if (GameSpeed == 1) gbuttonspeed.render(ButtonSpeedPos[x1speed1].x, ButtonSpeedPos[x1speed1].y, ButtonSpeedPos[x1speed1].w, ButtonSpeedPos[x1speed1].h, 0, SCREEN_HEIGHT - 37, 37, 37);
       if (GameSpeed == 2) gbuttonspeed.render(ButtonSpeedPos[x2speed1].x, ButtonSpeedPos[x2speed1].y, ButtonSpeedPos[x2speed1].w, ButtonSpeedPos[x2speed1].h, 0, SCREEN_HEIGHT - 37, 37, 37);
       if (GameSpeed == 4) gbuttonspeed.render(ButtonSpeedPos[x4speed1].x, ButtonSpeedPos[x4speed1].y, ButtonSpeedPos[x4speed1].w, ButtonSpeedPos[x4speed1].h, 0, SCREEN_HEIGHT - 37, 37, 37);
     }

     //Update button
     if (x >= 576 && x <= 576 + 36 && y >= 28 && y <= 28 + 16) {gEconomic2.render(code, code, code, code, 576, 28, 36, 16); RenderCostUpdate(1); }else
     gEconomic.render(code, code, code, code, 576, 28, 36, 16);

     if (x >= 639 && x <= 639 + 36 && y >= 28 && y <= 28 + 16) {gDefensive2.render(code, code, code, code, 639, 28, 36, 16); RenderCostUpdate(2); }else
     gDefensive.render(code, code, code, code, 639, 28, 36, 16);

     if (x >= 639 + 63 && x <= 639 + 36 + 63 && y >= 28 && y <= 28 + 16) {gArchery2.render(code, code, code, code, 639 + 63, 28, 36, 16); RenderCostUpdate(3);} else
     gArchery.render(code, code, code, code, 639 + 63, 28, 36, 16);

     if (x >= 576 && x <= 576 + 36 && y >= 64 && y <= 64 + 16) {gHitPoint2.render(code, code, code, code, 576, 64, 36, 16); RenderCostUpdate(4); }else
     gHitPoint.render(code, code, code, code, 576, 64, 36, 16);

     if (x >= 639 && x <= 639 + 36 && y >= 64 && y <= 64 + 16) {gOffensive2.render(code, code, code, code, 639, 64, 36, 16); RenderCostUpdate(5); }else
     gOffensive.render(code, code, code, code, 639, 64, 36, 16);

     if (x >= 639 + 63 && x <= 639 + 36 + 63 && y >= 64 && y <= 64 + 16) {gSocery2.render(code, code, code, code, 639 + 63, 64, 36, 16); RenderCostUpdate(6); }else
     gSocery.render(code, code, code, code, 639 + 63, 64, 36, 16);
}

