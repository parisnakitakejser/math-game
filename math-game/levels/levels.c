//
//  levels.c
//  math-game
//
//  Created by Paris Nakita Kejser on 03/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#include "levels.h"

GameCalc *game_calc;

void prepareGameStart(void)
{
    game_calc = malloc(sizeof(GameCalc) * 1);
    
    game_calc->count = 0;
    game_calc->count_approved = 0;
    game_calc->count_rejected = 0;
}