//
//  gameMenu.c
//  math-game
//
//  Created by Paris Nakita Kejser on 01/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#include "gameMenu.h"

int menu_number;

/*
 * Build main menu for terminal math-game.
 */
int menuMain(void)
{
    system("clear");
    printf("[1] Start new game\n");
    printf("[2] Game settings\n");
    printf("[3] Hiscore\n");
    printf("\n");
    printf("[0] Exit math-game game\n");
    scanf("%d", &menu_number);
    
    // If the player want to exit the game.
    if ( menu_number == 0 )
    {
        return 0;
    }
    // If the player want to start new game
    else if ( menu_number == 1 )
    {
        menuStartNewGame();
        return 1;
    }
    // If the player want game settings menu
    else if ( menu_number == 2 )
    {
        menuGameSettings();
        return 1;
    }
    // If the play what hiscore menu
    else if ( menu_number == 3 )
    {
        menuHiscore();
        return 1;
    }
    // If player press a menu number there not exist.
    else
    {
        return 2;
    }
}

/*
 * Build menu to start new game
 */
void menuStartNewGame(void)
{
    system("clear");
    printf("# Start new game #\n");
    printf("\n");
    printf("None menu to select\n");
    printf("\n");
    printf("[0] Back to main menu\n");
    
    scanf("%d", &menu_number);
    
    // If player want go back to main menu
    if ( menu_number == 0 )
        menuMain();
    
    // If player press a menu number there not exists.
    else
        menuStartNewGame();
}

/*
 * Build menu to game settings
 */
void menuGameSettings(void)
{
    system("clear");
    printf("# Game settings #\n");
    printf("\n");
    printf("None menu to select\n");
    printf("\n");
    printf("[0] Back to main menu\n");
    
    scanf("%d", &menu_number);
    
    // If player want go back to main menu
    if ( menu_number == 0 )
        menuMain();
    
    // If player press a menu number there not exists.
    else
        menuGameSettings();
}

/*
 * Build menu to hiscore
 */
void menuHiscore(void)
{
    system("clear");
    printf("# Hiscore #\n");
    printf("\n");
    printf("None menu to select\n");
    printf("\n");
    printf("[0] Back to main menu\n");
    
    scanf("%d", &menu_number);
    
    // If player want go back to main menu
    if ( menu_number == 0 )
        menuMain();
    
    // If player press a menu number there not exists.
    else
        menuHiscore();
}