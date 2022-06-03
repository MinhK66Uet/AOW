#pragma once
#include <bits/stdc++.h>
#include "InitResource.h"
#include "InitCostUpdate.h"

int Gold[11], MaxGold[11], TimeGold[11], MaxTimeGold[11], PlusGold[11];

void InitResouce()
{
     Gold[1] = 500;
     Gold[2] = 500;

     if (Difficult == 2) Gold[1] = 1000;
     if (Difficult == 3) Gold[1] = 1500;

     MaxGold[1] = 5000;
     MaxGold[2] = 5000;

     MaxTimeGold[1] = 200;
     MaxTimeGold[2] = 200;

     TimeGold[1] = MaxTimeGold[1];
     TimeGold[2] = MaxTimeGold[2];

     PlusGold[1] = 25;
     PlusGold[2] = 25;
}


