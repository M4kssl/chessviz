#include "board.h"
#include "cmove.h"
#include "figures.h"
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
    case 2:
        fp = fopen(argv[1], "a+");
        while (!feof(fp)) {
            char s[3], white[10], black[10];
            fscanf(fp, "%s %s %s", s, white, black);
            Mcheck(Board, s, white, black);
        }
        break;
    default:
        printf("ERROR");
        return 1;
    }
    fclose(fp);
    return 0;
}
