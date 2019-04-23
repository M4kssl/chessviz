#include "board.h"
#include "cmove.h"
#include "figures.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintBoard(char Board[8][8])
{
    int j, i;
    for (i = 1; i <= 8; i++) {
        printf("%2d", 9 - i);
        for (j = 1; j <= 8; j++) {
            printf("%2c", Board[i - 1][j - 1]);
        }
        printf("\n");
    }
    printf("   a b c d e f g h\n");
}
