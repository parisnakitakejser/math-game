//
//  game.c
//  math-game
//
//  Created by Paris Nakita Kejser on 03/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#include "settings.h"
#include "game.h"
#include "../levels/levels.h"

void runGame()
{
    time_t t;
    srand((unsigned) time(&t));
    
    game_calc->number1 = ( rand() % 10 ) + 1;
    game_calc->number2 = ( rand() % 10 ) + 1;
    
    printf("%d + %d = ", game_calc->number1, game_calc->number2);
    
    scanf("%d", &game_calc->sum);
    
    if ( ( game_calc->number1 + game_calc->number2 ) == game_calc->sum )
        game_calc->count_approved++;
    else
        game_calc->count_rejected++;
    
    game_calc->count = ( game_calc->count + 1 );
    
    if ( game_calc->count >= 10 )
    {
        printf("Total count: %d\n", game_calc->count);
        printf("Total approved: %d\n", game_calc->count_approved);
        printf("Total rejected: %d\n", game_calc->count_rejected);
    }
    else
    {
        runGame();
    }
}