//
//  main.c
//  mathGame
//
//  Created by Paris Nakita Kejser on 01/05/15.
//  Copyright (c) 2015 Paris Nakita Kejser. All rights reserved.
//

#include "gameMenu.h"

int main_return;

/*
 * Starting the program and handle inputs.
 */
int main(void)
{
    main_return = menuMain();
    
    if ( main_return == 0 )
        return 0;
    else if ( main_return == 1 )
        return 1;
    else if ( main_return == 2 )
    {
        main();
        return 1;
    }
}

