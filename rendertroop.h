#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "inittroop.h"
#include "processtroop.h"

void RenderTroop()
{
    GetMousePos();

    //team 1
    for (int i = 0; i < Troop[1].size(); ++i)
    if ( Troop[1][i].x != -1 )
    {
      if (!Pause) ProcessTroop(1,i);

      int x = Troop[1][i].x , y = Troop[1][i].y, w = Troop[1][i].w, h = Troop[1][i].h;
      int indle = Troop[1][i].indle , type = Troop[1][i].type , speed = Troop[1][i].speed, attackspeed = Troop[1][i].attackspeed;
      int typeattack = Troop[1][i].typeattack;

      //
      if (Troop[1][i].x < 0 ) continue;

      y = y + Troop[1][i].yplus;

      //SharpSHooter
      if ( type == 1)
      {

        if ( attackspeed >= 100)
        {
           if (attackspeed >= 125) gSharpshooter.render(SharpShooterPos[ SSPrepareAttackRight ].x, SharpShooterPos[ SSPrepareAttackRight ].y, SharpShooterPos[ SSPrepareAttackRight ].w, SharpShooterPos[ SSPrepareAttackRight ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 0 && attackspeed <= 124) gSharpshooter.render(SharpShooterPos[ SSAttackRight ].x, SharpShooterPos[ SSAttackRight ].y, SharpShooterPos[ SSAttackRight ].w, SharpShooterPos[ SSAttackRight ].h, x - 6 * r_x,y,w,h );
        } else
        if ( speed >= 1)
        {
           if (speed >= Troop[1][i].maxspeed / 2 + 1 && speed <= Troop[1][i].maxspeed) gSharpshooter.render(SharpShooterPos[ SSWalkRight1 ].x, SharpShooterPos[ SSWalkRight1 ].y, SharpShooterPos[ SSWalkRight1 ].w, SharpShooterPos[ SSWalkRight1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[1][i].maxspeed / 2) gSharpshooter.render(SharpShooterPos[ SSWalkRight2 ].x, SharpShooterPos[ SSWalkRight2 ].y, SharpShooterPos[ SSWalkRight2 ].w, SharpShooterPos[ SSWalkRight2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 25) gSharpshooter.render(SharpShooterPos[ SSIndleTallRight ].x, SharpShooterPos[ SSIndleTallRight ].y, SharpShooterPos[ SSIndleTallRight ].w, SharpShooterPos[ SSIndleTallRight ].h, x - 6 * r_x,y,w,h );
           if (indle >= 26 && indle <= 50) gSharpshooter.render(SharpShooterPos[ SSIndleShortRight ].x, SharpShooterPos[ SSIndleShortRight ].y, SharpShooterPos[ SSIndleShortRight ].w, SharpShooterPos[ SSIndleShortRight ].h, x - 6 * r_x,y,w,h );
        }
      } else
      //elf sword
      if ( type == 2 )
      {
        if ( attackspeed >= 40)
        {
           if (typeattack == 1)
           {
              if (attackspeed >= 75) gElfSword.render(ElfSwordPos[ ESPrepareAttackRight ].x, ElfSwordPos[ ESPrepareAttackRight ].y, ElfSwordPos[ ESPrepareAttackRight ].w, ElfSwordPos[ ESPrepareAttackRight ].h, x - 6 * r_x,y,w,h );
              if (attackspeed >= 40 && attackspeed <= 74) gElfSword.render(ElfSwordPos[ ESAttackRight ].x, ElfSwordPos[ ESAttackRight ].y, ElfSwordPos[ ESAttackRight ].w, ElfSwordPos[ ESAttackRight ].h, x - 6 * r_x,y,w,h );
           } else
           {
              if (attackspeed >= 75) gElfSword.render(ElfSwordPos[ ESPrepareAttackRight2 ].x, ElfSwordPos[ ESPrepareAttackRight2 ].y, ElfSwordPos[ ESPrepareAttackRight2 ].w, ElfSwordPos[ ESPrepareAttackRight2 ].h, x - 6 * r_x,y,w,h );
              if (attackspeed >= 40 && attackspeed <= 74) gElfSword.render(ElfSwordPos[ ESAttackRight2 ].x, ElfSwordPos[ ESAttackRight2 ].y, ElfSwordPos[ ESAttackRight2 ].w, ElfSwordPos[ ESAttackRight2 ].h, x - 6 * r_x,y,w,h );
           }
        } else
        if ( speed >= 1)
        {
           if (speed >= Troop[1][i].maxspeed / 2 + 1 && speed <= Troop[1][i].maxspeed) gElfSword.render(ElfSwordPos[ ESWalkRight1 ].x, ElfSwordPos[ ESWalkRight1 ].y, ElfSwordPos[ ESWalkRight1 ].w, ElfSwordPos[ ESWalkRight1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[1][i].maxspeed / 2) gElfSword.render(ElfSwordPos[ ESWalkRight2 ].x, ElfSwordPos[ ESWalkRight2 ].y, ElfSwordPos[ ESWalkRight2 ].w, ElfSwordPos[ ESWalkRight2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 25) gElfSword.render(ElfSwordPos[ ESIndleTallRight ].x, ElfSwordPos[ ESIndleTallRight ].y, ElfSwordPos[ ESIndleTallRight ].w, ElfSwordPos[ ESIndleTallRight ].h, x - 6 * r_x,y,w,h );
           if (indle >= 26 && indle <= 50) gElfSword.render(ElfSwordPos[ ESIndleShortRight ].x, ElfSwordPos[ ESIndleShortRight ].y, ElfSwordPos[ ESIndleShortRight ].w, ElfSwordPos[ ESIndleShortRight ].h, x - 6 * r_x,y,w,h );
        }
      } else
      //Meric
      if ( type == 3)
      {
        if ( attackspeed >= 150)
        {
           if (attackspeed >= 190) gMeric.render(MericPos[ MAttackRight1 ].x, MericPos[ MAttackRight1 ].y, MericPos[ MAttackRight1 ].w, MericPos[ MAttackRight1 ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 170 && attackspeed <= 189) gMeric.render(MericPos[ MAttackRight2 ].x, MericPos[ MAttackRight2 ].y, MericPos[ MAttackRight2 ].w, MericPos[ MAttackRight2 ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 150 && attackspeed <= 169) gMeric.render(MericPos[ MAttackRight3 ].x, MericPos[ MAttackRight3 ].y, MericPos[ MAttackRight3 ].w, MericPos[ MAttackRight3 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( speed >= 1)
        {
           if (speed >= Troop[1][i].maxspeed / 2 + 1 && speed <= Troop[1][i].maxspeed) gMeric.render(MericPos[ MWalkRight1 ].x, MericPos[ MWalkRight1 ].y, MericPos[ MWalkRight1 ].w, MericPos[ MWalkRight1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[1][i].maxspeed / 2) gMeric.render(MericPos[ MWalkRight2 ].x, MericPos[ MWalkRight2 ].y, MericPos[ MWalkRight2 ].w, MericPos[ MWalkRight2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 50) gMeric.render(MericPos[ MIndleTallRight ].x, MericPos[ MIndleTallRight ].y, MericPos[ MIndleTallRight ].w, MericPos[ MIndleTallRight ].h, x - 6 * r_x,y,w,h );
           if (indle >= 51 && indle <= 100) gMeric.render(MericPos[ MIndleShortRight ].x, MericPos[ MIndleShortRight ].y, MericPos[ MIndleShortRight ].w, MericPos[ MIndleShortRight ].h, x - 6 * r_x,y,w,h );
        }
      } else
      //elf soccerer
      if ( type == 4 )
      {
         if (attackspeed >= 1400)
         {
            if (attackspeed >= 1450) gElfSoc.render( ElfSocPos[AttackLeft1].x , ElfSocPos[AttackLeft1].y, ElfSocPos[AttackLeft1].w, ElfSocPos[AttackLeft1].h, x - 6 * r_x,y,w,h );
            if (attackspeed <= 1449) gElfSoc.render( ElfSocPos[AttackLeft2].x , ElfSocPos[AttackLeft2].y, ElfSocPos[AttackLeft2].w, ElfSocPos[AttackLeft2].h, x - 6 * r_x,y,w,h );
         } else
         if ( speed >= 1)
         {
            if (speed >= Troop[1][i].maxspeed / 2 + 1 && speed <= Troop[1][i].maxspeed) gElfSoc.render( ElfSocPos[ElfSocWalkLeft1].x, ElfSocPos[ElfSocWalkLeft1].y, ElfSocPos[ElfSocWalkLeft1].w, ElfSocPos[ElfSocWalkLeft1].h, x - 6 * r_x,y,w,h  );
            if (speed >= 0 && speed <= Troop[1][i].maxspeed / 2) gElfSoc.render( ElfSocPos[ElfSocWalkLeft2].x, ElfSocPos[ElfSocWalkLeft2].y, ElfSocPos[ElfSocWalkLeft2].w, ElfSocPos[ElfSocWalkLeft2].h, x - 6 * r_x,y,w,h  );
         } else
         if ( indle >= 0)
         {
            if (indle >= 0 && indle <= 38) gElfSoc.render( ElfSocPos[ElfSocIndleTallLeft].x, ElfSocPos[ElfSocIndleTallLeft].y, ElfSocPos[ElfSocIndleTallLeft].w, ElfSocPos[ElfSocIndleTallLeft].h,  x - 6 * r_x,y,w,h );
            if (indle >= 39 && indle <= 76) gElfSoc.render( ElfSocPos[ElfSocIndleTallLeft2].x, ElfSocPos[ElfSocIndleTallLeft2].y, ElfSocPos[ElfSocIndleTallLeft2].w, ElfSocPos[ElfSocIndleTallLeft2].h,  x - 6 * r_x,y,w,h );
            if (indle >= 77 && indle <= 114) gElfSoc.render( ElfSocPos[ElfSocIndleTallLeft3].x, ElfSocPos[ElfSocIndleTallLeft3].y, ElfSocPos[ElfSocIndleTallLeft3].w, ElfSocPos[ElfSocIndleTallLeft3].h,  x - 6 * r_x,y,w,h );
         } else
         gElfSoc.render( ElfSocPos[ElfSocIndleTallLeft].x, ElfSocPos[ElfSocIndleTallLeft].y, ElfSocPos[ElfSocIndleTallLeft].w, ElfSocPos[ElfSocIndleTallLeft].h,  x - 6 * r_x,y,w,h );
      } else
      //Butcher
      if ( type == 5)
      {
          if (attackspeed >= 50 && Troop[1][i].typeattack == 1)
          {
            if (attackspeed >= 75) gButcher.render(ButcherPos[ButcherAttackLeft1].x, ButcherPos[ButcherAttackLeft1].y, ButcherPos[ButcherAttackLeft1].w, ButcherPos[ButcherAttackLeft1].h, x - 6 * r_x,y,w,h );
            if (attackspeed <= 74) gButcher.render(ButcherPos[ButcherAttackLeft2].x, ButcherPos[ButcherAttackLeft2].y, ButcherPos[ButcherAttackLeft2].w, ButcherPos[ButcherAttackLeft2].h, x - 6 * r_x,y,w,h );
          } else
          if (speed >= 1)
          {
             if (speed >= Troop[1][i].maxspeed / 2 + 1 && speed <= Troop[1][i].maxspeed) gButcher.render( ButcherPos[ButcherWalkLeft1].x, ButcherPos[ButcherWalkLeft1].y, ButcherPos[ButcherWalkLeft1].w, ButcherPos[ButcherWalkLeft1].h, x - 6 * r_x,y,w,h  );
             if (speed >= 0 && speed <= Troop[1][i].maxspeed / 2) gButcher.render( ButcherPos[ButcherWalkLeft2].x, ButcherPos[ButcherWalkLeft2].y, ButcherPos[ButcherWalkLeft2].w, ButcherPos[ButcherWalkLeft2].h, x - 6 * r_x,y,w,h  );
          } else
          if (indle >= 0)
          {
              if (indle >= 0 && indle <= 25) gButcher.render(ButcherPos[ButcherIndleLeft1].x, ButcherPos[ButcherIndleLeft1].y, ButcherPos[ButcherIndleLeft1].w, ButcherPos[ButcherIndleLeft1].h, x - 6 * r_x,y,w,h );
              if (indle >= 26 && indle <= 50) gButcher.render(ButcherPos[ButcherIndleLeft2].x, ButcherPos[ButcherIndleLeft2].y, ButcherPos[ButcherIndleLeft2].w, ButcherPos[ButcherIndleLeft2].h, x - 6 * r_x,y,w,h );
          } else
          gButcher.render(ButcherPos[ButcherIndleLeft1].x, ButcherPos[ButcherIndleLeft1].y, ButcherPos[ButcherIndleLeft1].w, ButcherPos[ButcherIndleLeft1].h, x - 6 * r_x,y,w,h );
      } else
      //GoldSharpSHooter
      if ( type == 6)
      {
        if ( attackspeed >= 100)
        {
           if (attackspeed >= 125) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSPrepareAttackRight ].x, GoldSharpShooterPos[ GSSPrepareAttackRight ].y, GoldSharpShooterPos[ GSSPrepareAttackRight ].w, GoldSharpShooterPos[ GSSPrepareAttackRight ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 0 && attackspeed <= 124) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSAttackRight ].x, GoldSharpShooterPos[ GSSAttackRight ].y, GoldSharpShooterPos[ GSSAttackRight ].w, GoldSharpShooterPos[ GSSAttackRight ].h, x - 6 * r_x,y,w,h );
        } else
        if ( speed >= 1)
         {
           if (speed >= Troop[1][i].maxspeed / 2 + 1 && speed <= Troop[1][i].maxspeed) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSWalkRight1 ].x, GoldSharpShooterPos[ GSSWalkRight1 ].y, GoldSharpShooterPos[ GSSWalkRight1 ].w, GoldSharpShooterPos[ GSSWalkRight1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[1][i].maxspeed / 2) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSWalkRight2 ].x, GoldSharpShooterPos[ GSSWalkRight2 ].y, GoldSharpShooterPos[ GSSWalkRight2 ].w, GoldSharpShooterPos[ GSSWalkRight2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 25) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSIndleTallRight ].x, GoldSharpShooterPos[ GSSIndleTallRight ].y, GoldSharpShooterPos[ GSSIndleTallRight ].w, GoldSharpShooterPos[ GSSIndleTallRight ].h, x - 6 * r_x,y,w,h );
           if (indle >= 26 && indle <= 50) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSIndleShortRight ].x, GoldSharpShooterPos[ GSSIndleShortRight ].y, GoldSharpShooterPos[ GSSIndleShortRight ].w, GoldSharpShooterPos[ GSSIndleShortRight ].h, x - 6 * r_x,y,w,h );
        }
      }

    }


    //team 2
    for (int i = 0; i < Troop[2].size(); ++i)
    if ( Troop[2][i].x != -1 )
    {
      if (!Pause) ProcessTroop(2,i);

      int x = Troop[2][i].x , y = Troop[2][i].y, w = Troop[2][i].w, h = Troop[2][i].h;
      int indle = Troop[2][i].indle , type = Troop[2][i].type , speed = Troop[2][i].speed , attackspeed = Troop[2][i].attackspeed;
      int typeattack = Troop[2][i].typeattack;

      //
      if (Troop[2][i].x < 0 ) continue;

      y = y + Troop[2][i].yplus;

      //sharpshooter
      if ( type == 1)
      {

        if ( attackspeed >= 100)
        {
           if (attackspeed >= 125) gSharpshooter.render(SharpShooterPos[ SSPrepareAttackLeft ].x, SharpShooterPos[ SSPrepareAttackLeft ].y, SharpShooterPos[ SSPrepareAttackLeft ].w, SharpShooterPos[ SSPrepareAttackLeft ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 0 && attackspeed <= 124) gSharpshooter.render(SharpShooterPos[ SSAttackLeft ].x, SharpShooterPos[ SSAttackLeft ].y, SharpShooterPos[ SSAttackLeft ].w, SharpShooterPos[ SSAttackLeft ].h, x - 6 * r_x,y,w,h );
        } else
        if ( speed >= 1)
        {
           if (speed >= Troop[2][i].maxspeed / 2 + 1 && speed <= Troop[2][i].maxspeed) gSharpshooter.render(SharpShooterPos[ SSWalkLeft1 ].x, SharpShooterPos[ SSWalkLeft1 ].y, SharpShooterPos[ SSWalkLeft1 ].w, SharpShooterPos[ SSWalkLeft1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[2][i].maxspeed / 2) gSharpshooter.render(SharpShooterPos[ SSWalkLeft2 ].x, SharpShooterPos[ SSWalkLeft2 ].y, SharpShooterPos[ SSWalkLeft2 ].w, SharpShooterPos[ SSWalkLeft2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 25) gSharpshooter.render(SharpShooterPos[ SSIndleTallLeft ].x, SharpShooterPos[ SSIndleTallLeft ].y, SharpShooterPos[ SSIndleTallLeft ].w, SharpShooterPos[ SSIndleTallLeft ].h, x - 6 * r_x,y,w,h );
           if (indle >= 26 && indle <= 50) gSharpshooter.render(SharpShooterPos[ SSIndleShortLeft ].x, SharpShooterPos[ SSIndleShortLeft ].y, SharpShooterPos[ SSIndleShortLeft ].w, SharpShooterPos[ SSIndleShortLeft ].h, x - 6 * r_x,y,w,h );
        }
      } else
      //elf sword
      if ( type == 2 )
      {
        if ( attackspeed >= 40)
        {
           if (typeattack == 1)
           {
              if (attackspeed >= 75) gElfSword.render(ElfSwordPos[ ESPrepareAttackLeft ].x, ElfSwordPos[ ESPrepareAttackLeft ].y, ElfSwordPos[ ESPrepareAttackLeft ].w, ElfSwordPos[ ESPrepareAttackLeft ].h, x - 6 * r_x,y,w,h );
              if (attackspeed >= 40 && attackspeed <= 74) gElfSword.render(ElfSwordPos[ ESAttackLeft ].x, ElfSwordPos[ ESAttackLeft ].y, ElfSwordPos[ ESAttackLeft ].w, ElfSwordPos[ ESAttackLeft ].h, x - 6 * r_x,y,w,h );
           } else
           {
              if (attackspeed >= 75) gElfSword.render(ElfSwordPos[ ESPrepareAttackLeft2 ].x, ElfSwordPos[ ESPrepareAttackLeft2 ].y, ElfSwordPos[ ESPrepareAttackLeft2 ].w, ElfSwordPos[ ESPrepareAttackLeft2 ].h, x - 6 * r_x,y,w,h );
              if (attackspeed >= 40 && attackspeed <= 74) gElfSword.render(ElfSwordPos[ ESAttackLeft2 ].x, ElfSwordPos[ ESAttackLeft2 ].y, ElfSwordPos[ ESAttackLeft2 ].w, ElfSwordPos[ ESAttackLeft2 ].h, x - 6 * r_x,y,w,h );
           }
        } else
        if ( speed >= 1)
        {
           //cout <<" ||| "<<speed <<'\n';
           if (speed >= Troop[2][i].maxspeed / 2 + 1 && speed <= Troop[2][i].maxspeed) gElfSword.render(ElfSwordPos[ ESWalkLeft1 ].x, ElfSwordPos[ ESWalkLeft1 ].y, ElfSwordPos[ ESWalkLeft1 ].w, ElfSwordPos[ ESWalkLeft1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[2][i].maxspeed / 2) gElfSword.render(ElfSwordPos[ ESWalkLeft2 ].x, ElfSwordPos[ ESWalkLeft2 ].y, ElfSwordPos[ ESWalkLeft2 ].w, ElfSwordPos[ ESWalkLeft2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 25) gElfSword.render(ElfSwordPos[ ESIndleTallLeft ].x, ElfSwordPos[ ESIndleTallLeft ].y, ElfSwordPos[ ESIndleTallLeft ].w, ElfSwordPos[ ESIndleTallLeft ].h, x - 6 * r_x,y,w,h );
           if (indle >= 26 && indle <= 50) gElfSword.render(ElfSwordPos[ ESIndleShortLeft ].x, ElfSwordPos[ ESIndleShortLeft ].y, ElfSwordPos[ ESIndleShortLeft ].w, ElfSwordPos[ ESIndleShortLeft ].h, x - 6 * r_x,y,w,h );
        }
      } else
      //Meric
      if ( type == 3)
      {
        if ( attackspeed >= 150)
        {
           if (attackspeed >= 190) gMeric.render(MericPos[ MAttackLeft1 ].x, MericPos[ MAttackLeft1 ].y, MericPos[ MAttackLeft1 ].w, MericPos[ MAttackLeft1 ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 170 && attackspeed <= 189) gMeric.render(MericPos[ MAttackLeft2 ].x, MericPos[ MAttackLeft2 ].y, MericPos[ MAttackLeft2 ].w, MericPos[ MAttackLeft2 ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 150 && attackspeed <= 169) gMeric.render(MericPos[ MAttackLeft3 ].x, MericPos[ MAttackLeft3 ].y, MericPos[ MAttackLeft3 ].w, MericPos[ MAttackLeft3 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( speed >= 1)
        {
           if (speed >= Troop[2][i].maxspeed / 2 + 1 && speed <= Troop[2][i].maxspeed) gMeric.render(MericPos[ MWalkLeft1 ].x, MericPos[ MWalkLeft1 ].y, MericPos[ MWalkLeft1 ].w, MericPos[ MWalkLeft1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[2][i].maxspeed / 2) gMeric.render(MericPos[ MWalkLeft2 ].x, MericPos[ MWalkLeft2 ].y, MericPos[ MWalkLeft2 ].w, MericPos[ MWalkLeft2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 50) gMeric.render(MericPos[ MIndleTallLeft ].x, MericPos[ MIndleTallLeft ].y, MericPos[ MIndleTallLeft ].w, MericPos[ MIndleTallLeft ].h, x - 6 * r_x,y,w,h );
           if (indle >= 51 && indle <= 100) gMeric.render(MericPos[ MIndleShortLeft ].x, MericPos[ MIndleShortLeft ].y, MericPos[ MIndleShortLeft ].w, MericPos[ MIndleShortLeft ].h, x - 6 * r_x,y,w,h );
        }
      } else
      //elf soccerer
      if ( type == 4 )
      {
         if (attackspeed >= 1400)
         {
            if (attackspeed >= 1450) gElfSoc.render( ElfSocPos[AttackRight1].x , ElfSocPos[AttackRight1].y, ElfSocPos[AttackRight1].w, ElfSocPos[AttackRight1].h, x - 6 * r_x,y,w,h );
            if (attackspeed <= 1449) gElfSoc.render( ElfSocPos[AttackRight2].x , ElfSocPos[AttackRight2].y, ElfSocPos[AttackRight2].w, ElfSocPos[AttackRight2].h, x - 6 * r_x,y,w,h );
         } else
         if ( speed >= 1)
         {
            if (speed >= Troop[2][i].maxspeed / 2 + 1 && speed <= Troop[2][i].maxspeed) gElfSoc.render( ElfSocPos[ElfSocWalkRight1].x, ElfSocPos[ElfSocWalkRight1].y, ElfSocPos[ElfSocWalkRight1].w, ElfSocPos[ElfSocWalkRight1].h, x - 6 * r_x,y,w,h  );
            if (speed >= 0 && speed <= Troop[2][i].maxspeed / 2) gElfSoc.render( ElfSocPos[ElfSocWalkRight2].x, ElfSocPos[ElfSocWalkRight2].y, ElfSocPos[ElfSocWalkRight2].w, ElfSocPos[ElfSocWalkRight2].h, x - 6 * r_x,y,w,h  );
         } else
         if ( indle >= 0)
         {
            if (indle >= 0 && indle <= 38) gElfSoc.render( ElfSocPos[ElfSocIndleTallRight].x, ElfSocPos[ElfSocIndleTallRight].y, ElfSocPos[ElfSocIndleTallRight].w, ElfSocPos[ElfSocIndleTallRight].h,  x - 6 * r_x,y,w,h );
            if (indle >= 39 && indle <= 76) gElfSoc.render( ElfSocPos[ElfSocIndleTallRight2].x, ElfSocPos[ElfSocIndleTallRight2].y, ElfSocPos[ElfSocIndleTallRight2].w, ElfSocPos[ElfSocIndleTallRight2].h,  x - 6 * r_x,y,w,h );
            if (indle >= 77 && indle <= 114) gElfSoc.render( ElfSocPos[ElfSocIndleTallRight3].x, ElfSocPos[ElfSocIndleTallRight3].y, ElfSocPos[ElfSocIndleTallRight3].w, ElfSocPos[ElfSocIndleTallRight3].h,  x - 6 * r_x,y,w,h );
         } else
         gElfSoc.render( ElfSocPos[ElfSocIndleTallRight].x, ElfSocPos[ElfSocIndleTallRight].y, ElfSocPos[ElfSocIndleTallRight].w, ElfSocPos[ElfSocIndleTallRight].h,  x - 6 * r_x,y,w,h );
      } else
      //GoldSharpSHooter
      if ( type == 6)
      {
        if ( attackspeed >= 100)
        {
           if (attackspeed >= 125) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSPrepareAttackLeft ].x, GoldSharpShooterPos[ GSSPrepareAttackLeft ].y, GoldSharpShooterPos[ GSSPrepareAttackLeft ].w, GoldSharpShooterPos[ GSSPrepareAttackLeft ].h, x - 6 * r_x,y,w,h );
           if (attackspeed >= 0 && attackspeed <= 124) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSAttackLeft ].x, GoldSharpShooterPos[ GSSAttackLeft ].y, GoldSharpShooterPos[ GSSAttackLeft ].w, GoldSharpShooterPos[ GSSAttackLeft ].h, x - 6 * r_x,y,w,h );
        } else
        if ( speed >= 1)
         {
           if (speed >= Troop[2][i].maxspeed / 2 + 1 && speed <= Troop[2][i].maxspeed) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSWalkLeft1 ].x, GoldSharpShooterPos[ GSSWalkLeft1 ].y, GoldSharpShooterPos[ GSSWalkLeft1 ].w, GoldSharpShooterPos[ GSSWalkLeft1 ].h, x - 6 * r_x,y,w,h );
           if (speed >= 0 && speed <= Troop[2][i].maxspeed / 2) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSWalkLeft2 ].x, GoldSharpShooterPos[ GSSWalkLeft2 ].y, GoldSharpShooterPos[ GSSWalkLeft2 ].w, GoldSharpShooterPos[ GSSWalkLeft2 ].h, x - 6 * r_x,y,w,h );
        } else
        if ( indle >= 0)
        {
           if (indle >= 0 && indle <= 25) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSIndleTallLeft ].x, GoldSharpShooterPos[ GSSIndleTallLeft ].y, GoldSharpShooterPos[ GSSIndleTallLeft ].w, GoldSharpShooterPos[ GSSIndleTallLeft ].h, x - 6 * r_x,y,w,h );
           if (indle >= 26 && indle <= 50) gGoldSharpShooter.render(GoldSharpShooterPos[ GSSIndleShortLeft ].x, GoldSharpShooterPos[ GSSIndleShortLeft ].y, GoldSharpShooterPos[ GSSIndleShortLeft ].w, GoldSharpShooterPos[ GSSIndleShortLeft ].h, x - 6 * r_x,y,w,h );
        }
      }



    }

    return;
}
