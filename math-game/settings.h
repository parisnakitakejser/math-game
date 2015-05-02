//
//  settings.h
//  math-game
//
//  Created by Paris Nakita Kejser on 01/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#ifndef __math_game__settings__
#define __math_game__settings__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIFFICULT 5

void setupDifficulties(void);
void setupPlayer(void);

typedef struct Difficult {
    char title[9];
    int procent;
} Difficult;

typedef struct Player {
    int difficult;
} Player;

extern Difficult *difficulties;
extern Player *player;

#endif /* defined(__math_game__settings__) */
