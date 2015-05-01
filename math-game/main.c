//
//  main.c
//  mathGame
//
//  Created by Paris Nakita Kejser on 01/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#include "settings.h"
#include "gameMenu.h"

/*
 * Starting the program and handle inputs.
 */
int main(void)
{
    setupDifficulties();
    
    printf("%s", difficulties[1].title);
    
    switch (menuMain())
    {
        case 0:
            return 0;
            break;
            
        case 1:
            return 1;
            break;
            
        case 2:
            main();
            return 1;
            break;

        default:
            printf("menuMain() return uknome int and the game is quit.");
            return 0;
            break;
    }
}

