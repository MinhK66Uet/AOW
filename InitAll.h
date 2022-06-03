#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "InitBasepos.h"
#include "Inittrooppos.h"
#include "inittroop.h"
#include "initarrow.h"
#include "InitArrowPOs.h"
#include "InitEffectpos.h"
#include "InitEffect.h"
#include "InitBase.h"
#include "RenderButton.h"
#include "InitTroopBlock.h"
#include "InitButtonPos.h"
#include "InitResource.h"
#include "InitCostTroop.h"
#include "InitUpdate.h"
#include "InitCostUpdate.h"

void InitAll()
{
    Pause = false;
    r_x = 0; r_y = 0;
    GameSpeed = 1;

    InitBasePos();
    InitSharpShooterPos();
    InitElfSwordPos();
    InitTroop();
    InitArrow();
    InitArrowPos();
    InitEffectPos();
    InitEffect();
    InitMericPos();
    InitElfSocPos();
    InitButcherPos();
    InitGoldArrowPos();
    InitGoldSharpShooterPos();
    InitBase();
    InitTroopBlock();
    InitButtonPos();
    InitResouce();
    InitNumberPos();
    InitCostTroop();
    InitUpdate();
    InitCostUpdate();
}

