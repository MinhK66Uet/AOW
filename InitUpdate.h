#pragma once
#include <bits/stdc++.h>
#include "InitSDL.h"

int Socery[3], Economic[3], Defensive[3], Offensive[3], HitPoint[3], Archery[3];
int Difficult;

void InitUpdate()
{
    Socery[1] = 0;
    Economic[1] = 0;
    Defensive[1] = 0;
    Offensive[1] = 0;
    HitPoint[1] = 0;
    Archery[1] = 0;

    Socery[2] = 0;
    Economic[2] = 0;
    Defensive[2] = 0;
    Offensive[2] = 0;
    HitPoint[2] = 0;
    Archery[2] = 0;

    if (Difficult == 2)
    {
        Socery[2] = 5;
        Economic[2] = 5;
        Defensive[2] = 5;
        Offensive[2] = 5;
        HitPoint[2] = 5;
        Archery[2] = 5;
    } else
    if (Difficult == 3)
    {
        Socery[2] = 10;
        Economic[2] = 10;
        Defensive[2] = 10;
        Offensive[2] = 10;
        HitPoint[2] = 10;
        Archery[2] = 10;
    }
}
