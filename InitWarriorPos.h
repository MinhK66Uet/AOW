#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>

enum Warrior
{
    IndleTallRight,
    IndleShortRight,
    AttackRight,
    WalkRight1,
    WalkRight2,
    DefendRight,

    IndleTallLeft,
    IndleShortLeft,
    AttackLeft,
    WalkLeft1,
    WalkLeft2,
    DefendLeft,
};
SDL_Rect WarriorPos[ 15 ];

void InitWarriorPos()
{
    WarriorPos[ IndleTallRight ].x = 0;
    WarriorPos[ IndleTallRight ].y = 0;
    WarriorPos[ IndleTallRight ].w = 25;
    WarriorPos[ IndleTallRight ].h = 23;

    WarriorPos[ IndleShortRight ].x = 26;
    WarriorPos[ IndleShortRight ].y = 0;
    WarriorPos[ IndleShortRight ].w = 25;
    WarriorPos[ IndleShortRight ].h = 23;

    WarriorPos[ AttackRight ].x = 52;
    WarriorPos[ AttackRight ].y = 0;
    WarriorPos[ AttackRight ].w = 25;
    WarriorPos[ AttackRight ].h = 23;

    WarriorPos[ WalkRight1 ].x = 78;
    WarriorPos[ WalkRight1 ].y = 0;
    WarriorPos[ WalkRight1 ].w = 25;
    WarriorPos[ WalkRight1 ].h = 23;

    WarriorPos[ WalkRight2 ].x = 104;
    WarriorPos[ WalkRight2 ].y = 0;
    WarriorPos[ WalkRight2 ].w = 25;
    WarriorPos[ WalkRight2 ].h = 23;

    WarriorPos[ DefendRight ].x = 130;
    WarriorPos[ DefendRight ].y = 0;
    WarriorPos[ DefendRight ].w = 25;
    WarriorPos[ DefendRight ].h = 23;
    //-----
    WarriorPos[ IndleTallLeft ].x = 0;
    WarriorPos[ IndleTallLeft ].y = 24;
    WarriorPos[ IndleTallLeft ].w = 25;
    WarriorPos[ IndleTallLeft ].h = 23;

    WarriorPos[ IndleShortLeft ].x = 26;
    WarriorPos[ IndleShortLeft ].y = 24;
    WarriorPos[ IndleShortLeft ].w = 25;
    WarriorPos[ IndleShortLeft ].h = 23;

    WarriorPos[ AttackLeft ].x = 52;
    WarriorPos[ AttackLeft ].y = 24;
    WarriorPos[ AttackLeft ].w = 25;
    WarriorPos[ AttackLeft ].h = 23;

    WarriorPos[ WalkLeft1 ].x = 78;
    WarriorPos[ WalkLeft1 ].y = 24;
    WarriorPos[ WalkLeft1 ].w = 25;
    WarriorPos[ WalkLeft1 ].h = 23;

    WarriorPos[ WalkLeft2 ].x = 104;
    WarriorPos[ WalkLeft2 ].y = 24;
    WarriorPos[ WalkLeft2 ].w = 25;
    WarriorPos[ WalkLeft2 ].h = 23;

    WarriorPos[ DefendLeft ].x = 130;
    WarriorPos[ DefendLeft ].y = 24;
    WarriorPos[ DefendLeft ].w = 25;
    WarriorPos[ DefendLeft ].h = 23;
}

