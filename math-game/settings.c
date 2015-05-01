//
//  settings.c
//  math-game
//
//  Created by Paris Nakita Kejser on 01/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#include "settings.h"

Difficult *difficulties;

void setupDifficulties(void)
{
    difficulties = malloc(sizeof(Difficult) * MAX_DIFFICULT);
    
    strcpy(difficulties[0].title, "Easy");
    difficulties[0].procent = 45;
    
    strcpy(difficulties[1].title, "Medium");
    difficulties[1].procent = 60;
    
    strcpy(difficulties[2].title, "Normal");
    difficulties[2].procent = 75;
    
    strcpy(difficulties[3].title, "Hardcore");
    difficulties[3].procent = 90;
    
    strcpy(difficulties[4].title, "Insane");
    difficulties[4].procent = 100;
}
