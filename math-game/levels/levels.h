//
//  levels.h
//  math-game
//
//  Created by Paris Nakita Kejser on 03/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#ifndef __math_game__levels__
#define __math_game__levels__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prepareGameStart(void);

typedef struct GameCalc {
    int number1;
    int number2;
    int sum;
    int count;
    int count_approved;
    int count_rejected;
} GameCalc;

extern GameCalc *game_calc;

#endif /* defined(__math_game__levels__) */
