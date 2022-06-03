#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>

//Sword man
enum Enemy
{
    EIndleTallRight,
    EIndleShortRight,
    EPrepareAttackRight,
    EAttackRight,
    EWalkRight1,
    EWalkRight2,

    EIndleTallLeft,
    EIndleShortLeft,
    EPrepareAttackLeft,
    EAttackLeft,
    EWalkLeft1,
    EWalkLeft2,
};

SDL_Rect EnemyPos[ 15 ];

void InitEnemyPos()
{
    EnemyPos[ EIndleTallRight ].x = 0;
    EnemyPos[ EIndleTallRight ].y = 0;
    EnemyPos[ EIndleTallRight ].w = 24;
    EnemyPos[ EIndleTallRight ].h = 21;

    EnemyPos[ EIndleShortRight ].x = 25;
    EnemyPos[ EIndleShortRight ].y = 0;
    EnemyPos[ EIndleShortRight ].w = 24;
    EnemyPos[ EIndleShortRight ].h = 21;

    EnemyPos[ EPrepareAttackRight ].x = 50;
    EnemyPos[ EPrepareAttackRight ].y = 0;
    EnemyPos[ EPrepareAttackRight ].w = 24;
    EnemyPos[ EPrepareAttackRight ].h = 21;

    EnemyPos[ EAttackRight ].x = 75;
    EnemyPos[ EAttackRight ].y = 0;
    EnemyPos[ EAttackRight ].w = 24;
    EnemyPos[ EAttackRight ].h = 21;

    EnemyPos[ EWalkRight1 ].x = 100;
    EnemyPos[ EWalkRight1 ].y = 0;
    EnemyPos[ EWalkRight1 ].w = 24;
    EnemyPos[ EWalkRight1 ].h = 21;

    EnemyPos[ EWalkRight2 ].x = 125;
    EnemyPos[ EWalkRight2 ].y = 0;
    EnemyPos[ EWalkRight2 ].w = 24;
    EnemyPos[ EWalkRight2 ].h = 21;
    //-----

    EnemyPos[ EIndleTallLeft ].x = 0;
    EnemyPos[ EIndleTallLeft ].y = 22;
    EnemyPos[ EIndleTallLeft ].w = 24;
    EnemyPos[ EIndleTallLeft ].h = 21;

    EnemyPos[ EIndleShortLeft ].x = 25;
    EnemyPos[ EIndleShortLeft ].y = 22;
    EnemyPos[ EIndleShortLeft ].w = 24;
    EnemyPos[ EIndleShortLeft ].h = 21;

    EnemyPos[ EPrepareAttackLeft ].x = 50;
    EnemyPos[ EPrepareAttackLeft ].y = 22;
    EnemyPos[ EPrepareAttackLeft ].w = 24;
    EnemyPos[ EPrepareAttackLeft ].h = 21;

    EnemyPos[ EAttackLeft ].x = 75;
    EnemyPos[ EAttackLeft ].y = 22;
    EnemyPos[ EAttackLeft ].w = 24;
    EnemyPos[ EAttackLeft ].h = 21;

    EnemyPos[ EWalkLeft1 ].x = 100;
    EnemyPos[ EWalkLeft1 ].y = 22;
    EnemyPos[ EWalkLeft1 ].w = 24;
    EnemyPos[ EWalkLeft1 ].h = 21;

    EnemyPos[ EWalkLeft2 ].x = 125;
    EnemyPos[ EWalkLeft2 ].y = 22;
    EnemyPos[ EWalkLeft2 ].w = 24;
    EnemyPos[ EWalkLeft2 ].h = 21;
}

//Archer

enum Archer
{
     AIndleTallRight,
     AIndleShortRight,
     AWalkRight1,
     AWalkRight2,
     APrepareAttackRight,
     AAttackRight,

     AIndleTallLeft,
     AIndleShortLeft,
     AWalkLeft1,
     AWalkLeft2,
     APrepareAttackLeft,
     AAttackLeft,
};

SDL_Rect ArcherPos[ 15 ];

void InitArcherPos()
{
    ArcherPos[ AIndleTallRight ].x = 0;
    ArcherPos[ AIndleTallRight ].y = 0;
    ArcherPos[ AIndleTallRight ].w = 27;
    ArcherPos[ AIndleTallRight ].h = 23;

    ArcherPos[ AIndleShortRight ].x = 28;
    ArcherPos[ AIndleShortRight ].y = 0;
    ArcherPos[ AIndleShortRight ].w = 27;
    ArcherPos[ AIndleShortRight ].h = 23;

    ArcherPos[ AWalkRight1 ].x = 56;
    ArcherPos[ AWalkRight1 ].y = 0;
    ArcherPos[ AWalkRight1 ].w = 27;
    ArcherPos[ AWalkRight1 ].h = 23;

    ArcherPos[ AWalkRight2 ].x = 84;
    ArcherPos[ AWalkRight2 ].y = 0;
    ArcherPos[ AWalkRight2 ].w = 27;
    ArcherPos[ AWalkRight2 ].h = 23;

    ArcherPos[ APrepareAttackRight ].x = 112;
    ArcherPos[ APrepareAttackRight ].y = 0;
    ArcherPos[ APrepareAttackRight ].w = 27;
    ArcherPos[ APrepareAttackRight ].h = 23;

    ArcherPos[ AAttackRight ].x = 140;
    ArcherPos[ AAttackRight ].y = 0;
    ArcherPos[ AAttackRight ].w = 27;
    ArcherPos[ AAttackRight ].h = 23;

    //

    ArcherPos[ AIndleTallLeft ].x = 0;
    ArcherPos[ AIndleTallLeft ].y = 24;
    ArcherPos[ AIndleTallLeft ].w = 27;
    ArcherPos[ AIndleTallLeft ].h = 23;

    ArcherPos[ AIndleShortLeft ].x = 28;
    ArcherPos[ AIndleShortLeft ].y = 24;
    ArcherPos[ AIndleShortLeft ].w = 27;
    ArcherPos[ AIndleShortLeft ].h = 23;

    ArcherPos[ AWalkLeft1 ].x = 56;
    ArcherPos[ AWalkLeft1 ].y = 24;
    ArcherPos[ AWalkLeft1 ].w = 27;
    ArcherPos[ AWalkLeft1 ].h = 23;

    ArcherPos[ AWalkLeft2 ].x = 84;
    ArcherPos[ AWalkLeft2 ].y = 24;
    ArcherPos[ AWalkLeft2 ].w = 27;
    ArcherPos[ AWalkLeft2 ].h = 23;

    ArcherPos[ APrepareAttackLeft ].x = 112;
    ArcherPos[ APrepareAttackLeft ].y = 24;
    ArcherPos[ APrepareAttackLeft ].w = 27;
    ArcherPos[ APrepareAttackLeft ].h = 23;

    ArcherPos[ AAttackLeft ].x = 140;
    ArcherPos[ AAttackLeft ].y = 24;
    ArcherPos[ AAttackLeft ].w = 27;
    ArcherPos[ AAttackLeft ].h = 23;
}

//SpearMan
enum Spear
{
     SPIndleTallRight,
     SPIndleShortRight,
     SPWalkRight1,
     SPWalkRight2,
     SPPrepareAttackRight,
     SPAttackRight,
     SPDefendRight,

     SPIndleTallLeft,
     SPIndleShortLeft,
     SPWalkLeft1,
     SPWalkLeft2,
     SPPrepareAttackLeft,
     SPAttackLeft,
     SPDefendLeft,
};

SDL_Rect SpearPos[ 15 ];

void InitSpearPos()
{
    SpearPos[ SPIndleTallRight ].x = 0;
    SpearPos[ SPIndleTallRight ].y = 0;
    SpearPos[ SPIndleTallRight ].w = 42;
    SpearPos[ SPIndleTallRight ].h = 22;

    SpearPos[ SPIndleShortRight ].x = 43;
    SpearPos[ SPIndleShortRight ].y = 0;
    SpearPos[ SPIndleShortRight ].w = 42;
    SpearPos[ SPIndleShortRight ].h = 22;

    SpearPos[ SPWalkRight1 ].x = 86;
    SpearPos[ SPWalkRight1 ].y = 0;
    SpearPos[ SPWalkRight1 ].w = 42;
    SpearPos[ SPWalkRight1 ].h = 22;

    SpearPos[ SPWalkRight2 ].x = 43 * 3;
    SpearPos[ SPWalkRight2 ].y = 0;
    SpearPos[ SPWalkRight2 ].w = 42;
    SpearPos[ SPWalkRight2 ].h = 22;

    SpearPos[ SPPrepareAttackRight ].x = 43 * 4;
    SpearPos[ SPPrepareAttackRight ].y = 0;
    SpearPos[ SPPrepareAttackRight ].w = 42;
    SpearPos[ SPPrepareAttackRight ].h = 22;

    SpearPos[ SPAttackRight ].x = 43 * 5;
    SpearPos[ SPAttackRight ].y = 0;
    SpearPos[ SPAttackRight ].w = 42;
    SpearPos[ SPAttackRight ].h = 22;

    SpearPos[ SPDefendRight ].x = 43 * 6;
    SpearPos[ SPDefendRight ].y = 0;
    SpearPos[ SPDefendRight ].w = 42;
    SpearPos[ SPDefendRight ].h = 22;

    //

    SpearPos[ SPIndleTallLeft ].x = 0;
    SpearPos[ SPIndleTallLeft ].y = 23;
    SpearPos[ SPIndleTallLeft ].w = 42;
    SpearPos[ SPIndleTallLeft ].h = 22;

    SpearPos[ SPIndleShortLeft ].x = 43;
    SpearPos[ SPIndleShortLeft ].y = 23;
    SpearPos[ SPIndleShortLeft ].w = 42;
    SpearPos[ SPIndleShortLeft ].h = 22;

    SpearPos[ SPWalkLeft1 ].x = 43 * 2;
    SpearPos[ SPWalkLeft1 ].y = 23;
    SpearPos[ SPWalkLeft1 ].w = 42;
    SpearPos[ SPWalkLeft1 ].h = 22;

    SpearPos[ SPWalkLeft2 ].x = 43 * 3;
    SpearPos[ SPWalkLeft2 ].y = 23;
    SpearPos[ SPWalkLeft2 ].w = 42;
    SpearPos[ SPWalkLeft2 ].h = 22;

    SpearPos[ SPPrepareAttackLeft ].x = 43 * 4;
    SpearPos[ SPPrepareAttackLeft ].y = 23;
    SpearPos[ SPPrepareAttackLeft ].w = 42;
    SpearPos[ SPPrepareAttackLeft ].h = 22;

    SpearPos[ SPAttackLeft ].x = 43 * 5;
    SpearPos[ SPAttackLeft ].y = 23;
    SpearPos[ SPAttackLeft ].w = 42;
    SpearPos[ SPAttackLeft ].h = 22;

    SpearPos[ SPDefendLeft ].x = 43 * 6;
    SpearPos[ SPDefendLeft ].y = 23;
    SpearPos[ SPDefendLeft ].w = 42;
    SpearPos[ SPDefendLeft ].h = 22;
}

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

