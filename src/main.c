#include "board.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char Board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    FILE* fp;
    switch (argc) {
        FILE* input;
        switch (argc) {
        case 2:
            input = fopen(argv[1], "a+");
            while (!feof(input)) {
                char sw[10], sb[10], str[2];
                fscanf(input, "%s %s %s", str, sw, sb);
            }
            break;
        default:
            printf("ERROR");
            return 1;
        }

        fclose(input);

        PrintBoard(Board);
        return 0;
    }
