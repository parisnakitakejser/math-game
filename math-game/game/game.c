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
#include "../gameMenu.h"

int menu_select;
void resualt_count(int number1, int number2, int resualt);

void level_3();
void level_2();

void level_1() {
    time_t t;
    srand((unsigned) time(&t));
    
    game_calc->number1 = ( rand() % 10 ) + 1;
    game_calc->number2 = ( rand() % 10 ) + 1;
    
    printf("%d + %d = ", game_calc->number1, game_calc->number2);
    
    scanf("%d", &game_calc->sum);
    
    if ( ( game_calc->number1 + game_calc->number2 ) == game_calc->sum ) {
        game_calc->count_approved++;
    } else {
        game_calc->count_rejected++;
    }
    
    if ( game_calc->count >= ( LEVEL_1_QUESTION - 1 )) {
        printf("Total count: %d\n", game_calc->count);
        printf("Total approved: %d\n", game_calc->count_approved);
        printf("Total rejected: %d\n", game_calc->count_rejected);
        printf("You got %d out of %d question.\n", game_calc->count_approved, LEVEL_1_QUESTION);
        printf("\n");
        
        printf("[1] Go to next level 2\n");
        printf("[0] Back to main menu\n");
        
        scanf("%d", &menu_select);
        
        if (menu_select == 0) {
            menuMain();
        } else {
            level_2();
        }
    }
    else {
        game_calc->count = ( game_calc->count + 1 );
        runGame();
    }
}

void level_2() {
    time_t t;
    srand((unsigned) time(&t));
    
    game_calc->number1 = ( rand() % 10 ) + 1;
    game_calc->number2 = ( rand() % 10 ) + 1;
    
    printf("%d - %d = ", game_calc->number1, game_calc->number2);
    
    scanf("%d", &game_calc->sum);
    
    if ( ( game_calc->number1 - game_calc->number2 ) == game_calc->sum ) {
        game_calc->count_approved++;
    } else {
        game_calc->count_rejected++;
    }
    
    if ( game_calc->count >= ( ( LEVEL_1_QUESTION + LEVEL_2_QUESTION ) - 1 )) {
        printf("Total count: %d\n", game_calc->count);
        printf("Total approved: %d\n", game_calc->count_approved);
        printf("Total rejected: %d\n", game_calc->count_rejected);
        printf("You got %d out of %d question.\n", game_calc->count_approved, LEVEL_2_QUESTION);
        printf("\n");
        
        printf("[1] Go to next level 3\n");
        printf("[0] Back to main menu\n");
        
        scanf("%d", &menu_select);
        
        if (menu_select == 0) {
            menuMain();
        } else {
            level_3();
        }
    }
    else {
        game_calc->count = ( game_calc->count + 1 );
        level_2();
    }
}

void level_3() {
    printf("Welcom to level 3 ;D");
}

void resualt_count(int number1, int number2, int resualt) {
    if ( ( number1 + number2 ) == resualt ) {
        game_calc->count_approved++;
    } else {
        game_calc->count_rejected++;
    }
}

void runGame() {
    level_1();
}