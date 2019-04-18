#include <stdio.h>
#include <stdlib.h>

void PrintBoard(char Board[8][8])
{
    int j, i;
    for (i = 1; i < 9; i++) {
        printf("%2d", i);
        for (j = 1; j < 9; j++) {
            printf("%2c", Board[i - 1][j - 1]);
        }
        printf("\n");
    }
    printf("   a b c d e f g h\n");
}

int main()
{
    char Board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    PrintBoard(Board);
    return 0;
}
