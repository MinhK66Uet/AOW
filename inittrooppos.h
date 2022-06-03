#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <vector>

//Sharpshooter
enum sharpshooter
{
    SSIndleTallRight,
    SSIndleShortRight,
    SSPrepareAttackRight,
    SSAttackRight,
    SSWalkRight1,
    SSWalkRight2,

    SSIndleTallLeft,
    SSIndleShortLeft,
    SSPrepareAttackLeft,
    SSAttackLeft,
    SSWalkLeft1,
    SSWalkLeft2,
};

SDL_Rect SharpShooterPos[ 15 ];

void InitSharpShooterPos()
{
    SharpShooterPos[ SSIndleTallRight ].x = 0;
    SharpShooterPos[ SSIndleTallRight ].y = 0;
    SharpShooterPos[ SSIndleTallRight ].w = 98;
    SharpShooterPos[ SSIndleTallRight ].h = 100;

    SharpShooterPos[ SSIndleShortRight ].x = 99;
    SharpShooterPos[ SSIndleShortRight ].y = 0;
    SharpShooterPos[ SSIndleShortRight ].w = 98;
    SharpShooterPos[ SSIndleShortRight ].h = 100;

    SharpShooterPos[ SSPrepareAttackRight ].x = 99 * 2;
    SharpShooterPos[ SSPrepareAttackRight ].y = 0;
    SharpShooterPos[ SSPrepareAttackRight ].w = 98;
    SharpShooterPos[ SSPrepareAttackRight ].h = 100;

    SharpShooterPos[ SSAttackRight ].x = 99 * 3;
    SharpShooterPos[ SSAttackRight ].y = 0;
    SharpShooterPos[ SSAttackRight ].w = 98;
    SharpShooterPos[ SSAttackRight ].h = 100;

    SharpShooterPos[ SSWalkRight1 ].x = 99 * 4;
    SharpShooterPos[ SSWalkRight1 ].y = 0;
    SharpShooterPos[ SSWalkRight1 ].w = 98;
    SharpShooterPos[ SSWalkRight1 ].h = 100;

    SharpShooterPos[ SSWalkRight2 ].x = 99 * 5;
    SharpShooterPos[ SSWalkRight2 ].y = 0;
    SharpShooterPos[ SSWalkRight2 ].w = 98;
    SharpShooterPos[ SSWalkRight2 ].h = 100;

    //

    SharpShooterPos[ SSIndleTallLeft ].x = 0;
    SharpShooterPos[ SSIndleTallLeft ].y = 101;
    SharpShooterPos[ SSIndleTallLeft ].w = 98;
    SharpShooterPos[ SSIndleTallLeft ].h = 100;

    SharpShooterPos[ SSIndleShortLeft ].x = 99;
    SharpShooterPos[ SSIndleShortLeft ].y = 101;
    SharpShooterPos[ SSIndleShortLeft ].w = 98;
    SharpShooterPos[ SSIndleShortLeft ].h = 100;

    SharpShooterPos[ SSPrepareAttackLeft ].x = 99 * 2;
    SharpShooterPos[ SSPrepareAttackLeft ].y = 101;
    SharpShooterPos[ SSPrepareAttackLeft ].w = 98;
    SharpShooterPos[ SSPrepareAttackLeft ].h = 100;

    SharpShooterPos[ SSAttackLeft ].x = 99 * 3;
    SharpShooterPos[ SSAttackLeft ].y = 101;
    SharpShooterPos[ SSAttackLeft ].w = 98;
    SharpShooterPos[ SSAttackLeft ].h = 100;

    SharpShooterPos[ SSWalkLeft1 ].x = 99 * 4;
    SharpShooterPos[ SSWalkLeft1 ].y = 101;
    SharpShooterPos[ SSWalkLeft1 ].w = 98;
    SharpShooterPos[ SSWalkLeft1 ].h = 100;

    SharpShooterPos[ SSWalkLeft2 ].x = 99 * 5;
    SharpShooterPos[ SSWalkLeft2 ].y = 101;
    SharpShooterPos[ SSWalkLeft2 ].w = 98;
    SharpShooterPos[ SSWalkLeft2 ].h = 100;

}

//Elf Swordman
enum ElfSword
{
    ESIndleTallRight,
    ESIndleShortRight,
    ESPrepareAttackRight,
    ESAttackRight,
    ESWalkRight1,
    ESWalkRight2,
    ESPrepareAttackRight2,
    ESAttackRight2,

    ESIndleTallLeft,
    ESIndleShortLeft,
    ESPrepareAttackLeft,
    ESAttackLeft,
    ESWalkLeft1,
    ESWalkLeft2,
    ESPrepareAttackLeft2,
    ESAttackLeft2,
};

SDL_Rect ElfSwordPos[ 15 ];

void InitElfSwordPos()
{
    ElfSwordPos[ ESIndleTallRight ].x = 0;
    ElfSwordPos[ ESIndleTallRight ].y = 0;
    ElfSwordPos[ ESIndleTallRight ].w = 128;
    ElfSwordPos[ ESIndleTallRight ].h = 139;

    ElfSwordPos[ ESIndleShortRight ].x = 129;
    ElfSwordPos[ ESIndleShortRight ].y = 0;
    ElfSwordPos[ ESIndleShortRight ].w = 128;
    ElfSwordPos[ ESIndleShortRight ].h = 139;

    ElfSwordPos[ ESPrepareAttackRight ].x = 129 * 4;
    ElfSwordPos[ ESPrepareAttackRight ].y = 0;
    ElfSwordPos[ ESPrepareAttackRight ].w = 128;
    ElfSwordPos[ ESPrepareAttackRight ].h = 139;

    ElfSwordPos[ ESAttackRight ].x = 129 * 5;
    ElfSwordPos[ ESAttackRight ].y = 0;
    ElfSwordPos[ ESAttackRight ].w = 128;
    ElfSwordPos[ ESAttackRight ].h = 139;

    ElfSwordPos[ ESWalkRight1 ].x = 129 * 2;
    ElfSwordPos[ ESWalkRight1 ].y = 0;
    ElfSwordPos[ ESWalkRight1 ].w = 128;
    ElfSwordPos[ ESWalkRight1 ].h = 139;

    ElfSwordPos[ ESWalkRight2 ].x = 129 * 3;
    ElfSwordPos[ ESWalkRight2 ].y = 0;
    ElfSwordPos[ ESWalkRight2 ].w = 128;
    ElfSwordPos[ ESWalkRight2 ].h = 139;

    ElfSwordPos[ ESPrepareAttackRight2 ].x = 129 * 6;
    ElfSwordPos[ ESPrepareAttackRight2 ].y = 0;
    ElfSwordPos[ ESPrepareAttackRight2 ].w = 128;
    ElfSwordPos[ ESPrepareAttackRight2 ].h = 139;

    ElfSwordPos[ ESAttackRight2 ].x = 129 * 7;
    ElfSwordPos[ ESAttackRight2 ].y = 0;
    ElfSwordPos[ ESAttackRight2 ].w = 128;
    ElfSwordPos[ ESAttackRight2 ].h = 139;


    //

    ElfSwordPos[ ESIndleTallLeft ].x = 0;
    ElfSwordPos[ ESIndleTallLeft ].y = 140;
    ElfSwordPos[ ESIndleTallLeft ].w = 128;
    ElfSwordPos[ ESIndleTallLeft ].h = 139;

    ElfSwordPos[ ESIndleShortLeft ].x = 129;
    ElfSwordPos[ ESIndleShortLeft ].y = 140;
    ElfSwordPos[ ESIndleShortLeft ].w = 128;
    ElfSwordPos[ ESIndleShortLeft ].h = 139;

    ElfSwordPos[ ESPrepareAttackLeft ].x = 129 * 4;
    ElfSwordPos[ ESPrepareAttackLeft ].y = 140;
    ElfSwordPos[ ESPrepareAttackLeft ].w = 128;
    ElfSwordPos[ ESPrepareAttackLeft ].h = 139;

    ElfSwordPos[ ESAttackLeft ].x = 129 * 5;
    ElfSwordPos[ ESAttackLeft ].y = 140;
    ElfSwordPos[ ESAttackLeft ].w = 128;
    ElfSwordPos[ ESAttackLeft ].h = 139;

    ElfSwordPos[ ESWalkLeft1 ].x = 129 * 2;
    ElfSwordPos[ ESWalkLeft1 ].y = 140;
    ElfSwordPos[ ESWalkLeft1 ].w = 128;
    ElfSwordPos[ ESWalkLeft1 ].h = 139;

    ElfSwordPos[ ESWalkLeft2 ].x = 129 * 3;
    ElfSwordPos[ ESWalkLeft2 ].y = 140;
    ElfSwordPos[ ESWalkLeft2 ].w = 128;
    ElfSwordPos[ ESWalkLeft2 ].h = 139;

    ElfSwordPos[ ESPrepareAttackLeft2 ].x = 129 * 6;
    ElfSwordPos[ ESPrepareAttackLeft2 ].y = 140;
    ElfSwordPos[ ESPrepareAttackLeft2 ].w = 128;
    ElfSwordPos[ ESPrepareAttackLeft2 ].h = 139;

    ElfSwordPos[ ESAttackLeft2 ].x = 129 * 7;
    ElfSwordPos[ ESAttackLeft2 ].y = 140;
    ElfSwordPos[ ESAttackLeft2 ].w = 128;
    ElfSwordPos[ ESAttackLeft2 ].h = 139;


}

//Meric
enum Meric
{
   MIndleTallRight,
   MIndleShortRight,
   MWalkRight1,
   MWalkRight2,
   MAttackRight2,
   MAttackRight3,
   MAttackRight1,

   MIndleTallLeft,
   MIndleShortLeft,
   MWalkLeft1,
   MWalkLeft2,
   MAttackLeft2,
   MAttackLeft3,
   MAttackLeft1
};

SDL_Rect MericPos[15];

void InitMericPos()
{
   MericPos[MIndleTallRight].x = 0;
   MericPos[MIndleTallRight].y = 0;
   MericPos[MIndleTallRight].w = 98;
   MericPos[MIndleTallRight].h = 100;

   MericPos[MIndleShortRight].x = 99;
   MericPos[MIndleShortRight].y = 0;
   MericPos[MIndleShortRight].w = 98;
   MericPos[MIndleShortRight].h = 100;

   MericPos[MWalkRight1].x = 99 * 2;
   MericPos[MWalkRight1].y = 0;
   MericPos[MWalkRight1].w = 98;
   MericPos[MWalkRight1].h = 100;

   MericPos[MWalkRight2].x = 99 * 3;
   MericPos[MWalkRight2].y = 0;
   MericPos[MWalkRight2].w = 98;
   MericPos[MWalkRight2].h = 100;

   MericPos[MAttackRight2].x = 99 * 4;
   MericPos[MAttackRight2].y = 0;
   MericPos[MAttackRight2].w = 98;
   MericPos[MAttackRight2].h = 100;

   MericPos[MAttackRight3].x = 99 * 5;
   MericPos[MAttackRight3].y = 0;
   MericPos[MAttackRight3].w = 98;
   MericPos[MAttackRight3].h = 100;

   MericPos[MAttackRight1].x = 99 * 6;
   MericPos[MAttackRight1].y = 0;
   MericPos[MAttackRight1].w = 98;
   MericPos[MAttackRight1].h = 100;

   //

   MericPos[MIndleTallLeft].x = 0;
   MericPos[MIndleTallLeft].y = 101;
   MericPos[MIndleTallLeft].w = 98;
   MericPos[MIndleTallLeft].h = 100;

   MericPos[MIndleShortLeft].x = 99;
   MericPos[MIndleShortLeft].y = 101;
   MericPos[MIndleShortLeft].w = 98;
   MericPos[MIndleShortLeft].h = 100;

   MericPos[MWalkLeft1].x = 99 * 2;
   MericPos[MWalkLeft1].y = 101;
   MericPos[MWalkLeft1].w = 98;
   MericPos[MWalkLeft1].h = 100;

   MericPos[MWalkLeft2].x = 99 * 3;
   MericPos[MWalkLeft2].y = 101;
   MericPos[MWalkLeft2].w = 98;
   MericPos[MWalkLeft2].h = 100;

   MericPos[MAttackLeft2].x = 99 * 4;
   MericPos[MAttackLeft2].y = 101;
   MericPos[MAttackLeft2].w = 98;
   MericPos[MAttackLeft2].h = 100;

   MericPos[MAttackLeft3].x = 99 * 5;
   MericPos[MAttackLeft3].y = 101;
   MericPos[MAttackLeft3].w = 98;
   MericPos[MAttackLeft3].h = 100;

   MericPos[MAttackLeft1].x = 99 * 6;
   MericPos[MAttackLeft1].y = 101;
   MericPos[MAttackLeft1].w = 98;
   MericPos[MAttackLeft1].h = 100;
}

//ElfSoccerer

enum ElfSoccerer
{
    ElfSocIndleTallLeft,
    ElfSocIndleTallLeft2,
    ElfSocIndleTallLeft3,
    ElfSocWalkLeft1,
    ElfSocWalkLeft2,
    AttackLeft1,
    AttackLeft2,

    ElfSocIndleTallRight,
    ElfSocIndleTallRight2,
    ElfSocIndleTallRight3,
    ElfSocWalkRight1,
    ElfSocWalkRight2,
    AttackRight1,
    AttackRight2
};

SDL_Rect ElfSocPos[25];

void InitElfSocPos()
{
    ElfSocPos[ElfSocIndleTallLeft].x = 0;
    ElfSocPos[ElfSocIndleTallLeft].y = 0;
    ElfSocPos[ElfSocIndleTallLeft].w = 98;
    ElfSocPos[ElfSocIndleTallLeft].h = 100;

    ElfSocPos[ElfSocIndleTallLeft2].x = 99;
    ElfSocPos[ElfSocIndleTallLeft2].y = 0;
    ElfSocPos[ElfSocIndleTallLeft2].w = 98;
    ElfSocPos[ElfSocIndleTallLeft2].h = 100;

    ElfSocPos[ElfSocIndleTallLeft3].x = 99 * 2;
    ElfSocPos[ElfSocIndleTallLeft3].y = 0;
    ElfSocPos[ElfSocIndleTallLeft3].w = 98;
    ElfSocPos[ElfSocIndleTallLeft3].h = 100;

    ElfSocPos[ElfSocWalkLeft1].x = 99 * 3;
    ElfSocPos[ElfSocWalkLeft1].y = 0;
    ElfSocPos[ElfSocWalkLeft1].w = 98;
    ElfSocPos[ElfSocWalkLeft1].h = 100;

    ElfSocPos[ElfSocWalkLeft2].x = 99 * 4;
    ElfSocPos[ElfSocWalkLeft2].y = 0;
    ElfSocPos[ElfSocWalkLeft2].w = 98;
    ElfSocPos[ElfSocWalkLeft2].h = 100;

    ElfSocPos[AttackLeft1].x = 99 * 5;
    ElfSocPos[AttackLeft1].y = 0;
    ElfSocPos[AttackLeft1].w = 98;
    ElfSocPos[AttackLeft1].h = 100;

    ElfSocPos[AttackLeft2].x = 99 * 6;
    ElfSocPos[AttackLeft2].y = 0;
    ElfSocPos[AttackLeft2].w = 98;
    ElfSocPos[AttackLeft2].h = 100;

    ////

    ElfSocPos[ElfSocIndleTallRight].x = 0;
    ElfSocPos[ElfSocIndleTallRight].y = 101;
    ElfSocPos[ElfSocIndleTallRight].w = 98;
    ElfSocPos[ElfSocIndleTallRight].h = 100;

    ElfSocPos[ElfSocIndleTallRight2].x = 99;
    ElfSocPos[ElfSocIndleTallRight2].y = 101;
    ElfSocPos[ElfSocIndleTallRight2].w = 98;
    ElfSocPos[ElfSocIndleTallRight2].h = 100;

    ElfSocPos[ElfSocIndleTallRight3].x = 99 * 2;
    ElfSocPos[ElfSocIndleTallRight3].y = 101;
    ElfSocPos[ElfSocIndleTallRight3].w = 98;
    ElfSocPos[ElfSocIndleTallRight3].h = 100;

    ElfSocPos[ElfSocWalkRight1].x = 99 * 3;
    ElfSocPos[ElfSocWalkRight1].y = 101;
    ElfSocPos[ElfSocWalkRight1].w = 98;
    ElfSocPos[ElfSocWalkRight1].h = 100;

    ElfSocPos[ElfSocWalkRight2].x = 99 * 4;
    ElfSocPos[ElfSocWalkRight2].y = 101;
    ElfSocPos[ElfSocWalkRight2].w = 98;
    ElfSocPos[ElfSocWalkRight2].h = 100;

    ElfSocPos[AttackRight1].x = 99 * 5;
    ElfSocPos[AttackRight1].y = 101;
    ElfSocPos[AttackRight1].w = 98;
    ElfSocPos[AttackRight1].h = 100;

    ElfSocPos[AttackRight2].x = 99 * 6;
    ElfSocPos[AttackRight2].y = 101;
    ElfSocPos[AttackRight2].w = 98;
    ElfSocPos[AttackRight2].h = 100;
}

enum Butcher
{
    ButcherIndleLeft1,
    ButcherIndleLeft2,
    ButcherWalkLeft1,
    ButcherWalkLeft2,
    ButcherAttackLeft1,
    ButcherAttackLeft2
};

SDL_Rect ButcherPos[25];

void InitButcherPos()
{
    ButcherPos[ButcherIndleLeft1].x = 0;
    ButcherPos[ButcherIndleLeft1].y = 0;
    ButcherPos[ButcherIndleLeft1].w = 127;
    ButcherPos[ButcherIndleLeft1].h = 133;

    ButcherPos[ButcherIndleLeft2].x = 128;
    ButcherPos[ButcherIndleLeft2].y = 0;
    ButcherPos[ButcherIndleLeft2].w = 127;
    ButcherPos[ButcherIndleLeft2].h = 133;

    ButcherPos[ButcherWalkLeft1].x = 128 * 2;
    ButcherPos[ButcherWalkLeft1].y = 0;
    ButcherPos[ButcherWalkLeft1].w = 127;
    ButcherPos[ButcherWalkLeft1].h = 133;

    ButcherPos[ButcherWalkLeft2].x = 128 * 3;
    ButcherPos[ButcherWalkLeft2].y = 0;
    ButcherPos[ButcherWalkLeft2].w = 127;
    ButcherPos[ButcherWalkLeft2].h = 133;

    ButcherPos[ButcherAttackLeft1].x = 128 * 4;
    ButcherPos[ButcherAttackLeft1].y = 0;
    ButcherPos[ButcherAttackLeft1].w = 127;
    ButcherPos[ButcherAttackLeft1].h = 133;

    ButcherPos[ButcherAttackLeft2].x = 128 * 5;
    ButcherPos[ButcherAttackLeft2].y = 0;
    ButcherPos[ButcherAttackLeft2].w = 127;
    ButcherPos[ButcherAttackLeft2].h = 133;
}

//Gold SharpShooter
enum Goldsharpshooter
{
    GSSIndleTallRight,
    GSSIndleShortRight,
    GSSPrepareAttackRight,
    GSSAttackRight,
    GSSWalkRight1,
    GSSWalkRight2,

    GSSIndleTallLeft,
    GSSIndleShortLeft,
    GSSPrepareAttackLeft,
    GSSAttackLeft,
    GSSWalkLeft1,
    GSSWalkLeft2,
};

SDL_Rect GoldSharpShooterPos[ 15 ];

void InitGoldSharpShooterPos()
{
    GoldSharpShooterPos[ GSSIndleTallRight ].x = 0;
    GoldSharpShooterPos[ GSSIndleTallRight ].y = 0;
    GoldSharpShooterPos[ GSSIndleTallRight ].w = 98;
    GoldSharpShooterPos[ GSSIndleTallRight ].h = 100;

    GoldSharpShooterPos[ GSSIndleShortRight ].x = 99;
    GoldSharpShooterPos[ GSSIndleShortRight ].y = 0;
    GoldSharpShooterPos[ GSSIndleShortRight ].w = 98;
    GoldSharpShooterPos[ GSSIndleShortRight ].h = 100;

    GoldSharpShooterPos[ GSSPrepareAttackRight ].x = 99 * 2;
    GoldSharpShooterPos[ GSSPrepareAttackRight ].y = 0;
    GoldSharpShooterPos[ GSSPrepareAttackRight ].w = 98;
    GoldSharpShooterPos[ GSSPrepareAttackRight ].h = 100;

    GoldSharpShooterPos[ GSSAttackRight ].x = 99 * 3;
    GoldSharpShooterPos[ GSSAttackRight ].y = 0;
    GoldSharpShooterPos[ GSSAttackRight ].w = 98;
    GoldSharpShooterPos[ GSSAttackRight ].h = 100;

    GoldSharpShooterPos[ GSSWalkRight1 ].x = 99 * 4;
    GoldSharpShooterPos[ GSSWalkRight1 ].y = 0;
    GoldSharpShooterPos[ GSSWalkRight1 ].w = 98;
    GoldSharpShooterPos[ GSSWalkRight1 ].h = 100;

    GoldSharpShooterPos[ GSSWalkRight2 ].x = 99 * 5;
    GoldSharpShooterPos[ GSSWalkRight2 ].y = 0;
    GoldSharpShooterPos[ GSSWalkRight2 ].w = 98;
    GoldSharpShooterPos[ GSSWalkRight2 ].h = 100;

    //

    GoldSharpShooterPos[ GSSIndleTallLeft ].x = 0;
    GoldSharpShooterPos[ GSSIndleTallLeft ].y = 101;
    GoldSharpShooterPos[ GSSIndleTallLeft ].w = 98;
    GoldSharpShooterPos[ GSSIndleTallLeft ].h = 100;

    GoldSharpShooterPos[ GSSIndleShortLeft ].x = 99;
    GoldSharpShooterPos[ GSSIndleShortLeft ].y = 101;
    GoldSharpShooterPos[ GSSIndleShortLeft ].w = 98;
    GoldSharpShooterPos[ GSSIndleShortLeft ].h = 100;

    GoldSharpShooterPos[ GSSPrepareAttackLeft ].x = 99 * 2;
    GoldSharpShooterPos[ GSSPrepareAttackLeft ].y = 101;
    GoldSharpShooterPos[ GSSPrepareAttackLeft ].w = 98;
    GoldSharpShooterPos[ GSSPrepareAttackLeft ].h = 100;

    GoldSharpShooterPos[ GSSAttackLeft ].x = 99 * 3;
    GoldSharpShooterPos[ GSSAttackLeft ].y = 101;
    GoldSharpShooterPos[ GSSAttackLeft ].w = 98;
    GoldSharpShooterPos[ GSSAttackLeft ].h = 100;

    GoldSharpShooterPos[ GSSWalkLeft1 ].x = 99 * 4;
    GoldSharpShooterPos[ GSSWalkLeft1 ].y = 101;
    GoldSharpShooterPos[ GSSWalkLeft1 ].w = 98;
    GoldSharpShooterPos[ GSSWalkLeft1 ].h = 100;

    GoldSharpShooterPos[ GSSWalkLeft2 ].x = 99 * 5;
    GoldSharpShooterPos[ GSSWalkLeft2 ].y = 101;
    GoldSharpShooterPos[ GSSWalkLeft2 ].w = 98;
    GoldSharpShooterPos[ GSSWalkLeft2 ].h = 100;

}

