//
//  gameMenu.c
//  math-game
//
//  Created by Paris Nakita Kejser on 01/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#include "gameMenu.h"
#include "settings.h"


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
    printf("[1] Difficult (%s)\n", difficulties[(player[0].difficult)].title);
    printf("[2] Player name (%s)\n", player[0].name);
    printf("\n");
    printf("[0] Back to main menu\n");
    
    scanf("%d", &menu_number);
    
    switch (menu_number)
    {
        case 0: // Back to main menu
            menuMain();
            break;
        
        case 1: // Change game settings
            menuGameSettingsDifficulty();
            break;
            
        case 2: // Change game player
            menuGameSettingsPlayerName();
            break;
            
        default: // Type wrong menu number
            menuGameSettings();
            break;
    }
}

/*
 * Build game settings menu to change game difficulty
 */
void menuGameSettingsDifficulty(void)
{
    int difficult_count;
    
    system("clear");
    printf("# Game settings / Difficult #\n");
    printf("\n");
    
    for (difficult_count = 1; difficult_count <= MAX_DIFFICULT; difficult_count++)
    {
        printf("[%d] %s (%d procent)\n", difficult_count, difficulties[(difficult_count-1)].title, difficulties[(difficult_count-1)].procent);
    }

    printf("\n");
    printf("[0] Back to game settings\n");
    
    scanf("%d", &menu_number);
    
    if ( menu_number > 1 && menu_number <= MAX_DIFFICULT )
    {
        player[0].difficult = (menu_number-1);
        menuGameSettings();
    }
    else if ( menu_number == 0 )
    {
        // Back to game settings
        menuGameSettings();
    }
    else
    {
        // If wrong menu number pressed
        menuGameSettingsDifficulty();
    }
}

/*
 * Build game settings menu to change player name
 */
void menuGameSettingsPlayerName(void)
{
    char player_name[(MAX_LETTER_PLAYER_NAME_SIZE+1)];
    
    system("clear");
    printf("# Game settings / Player name #\n");
    printf("\n");
    printf("[X] Cancel new player name\n");
    printf("\n");
    printf("Enter your new player name [1-32 char]: ");
    
    scanf("%s", player_name);
    
    if ( strlen(player_name) == 1 && ( player_name[0] == 'x' || player_name[0] == 'X' ) )
    {
       // cancel player name changes
    }
    else
    {
        strcpy(player[0].name, player_name);
    }
    
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