#pragma once
#include <bits/stdc++.h>
#include "InitSDL.h"
#include "ProcesResource.h"
#include "ProcessNumber.h"
#include "InitResource.h"
#include "InitButtonPos.h"
#include "ProcesResource.h"

void RenderResouce()
{
     ProcessResource();

     gGold.render(code, code, code, code, 260, 110, 23, 23);

     vector < int > NumberList = ProcessNumber(Gold[1]);

     for (int i = 0; i < NumberList.size(); ++i)
     {
         int a = NumberList[i];
         gNumber.render(NumberPos[a].x, NumberPos[a].y, NumberPos[a].w, NumberPos[a].h, 295 + (i - 1) * 12, 113, 18, 20);
     }
}

