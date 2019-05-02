#include "figures.h"
#include "board.h"
#include "cmove.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Pawnw(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'P') {
        printf("\nError, wrong figure, expected P\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement P, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement P, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'K' || Board[tx][ty] == 'P' || Board[tx][ty] == 'Q'
        || Board[tx][ty] == 'N' || Board[tx][ty] == 'R'
        || Board[tx][ty] == 'B') {
        printf("\nError, wrong movement P, attacking teammate \n");
        return 3;
    }
    return 0;
}

int Kingw(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'K') {
        printf("\nError, wrong figure, expected K\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement K, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement K, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'K' || Board[tx][ty] == 'P' || Board[tx][ty] == 'Q'
        || Board[tx][ty] == 'N' || Board[tx][ty] == 'R'
        || Board[tx][ty] == 'B') {
        printf("\nError, wrong movement K, attacking teammate \n");
        return 3;
    }
    return 0;
}

int Rookw(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'R') {
        printf("\nError, wrong figure, expected R\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement R, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement R, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'K' || Board[tx][ty] == 'P' || Board[tx][ty] == 'Q'
        || Board[tx][ty] == 'N' || Board[tx][ty] == 'R'
        || Board[tx][ty] == 'B') {
        printf("\nError, wrong movement R, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Queenw(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'Q') {
        printf("\nError, wrong figure, expected Q\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement Q, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement Q, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'K' || Board[tx][ty] == 'P' || Board[tx][ty] == 'Q'
        || Board[tx][ty] == 'N' || Board[tx][ty] == 'R'
        || Board[tx][ty] == 'B') {
        printf("\nError, wrong movement Q, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Bishopw(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'B') {
        printf("\nError, wrong figure, expected B\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement B, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement B, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'K' || Board[tx][ty] == 'P' || Board[tx][ty] == 'Q'
        || Board[tx][ty] == 'N' || Board[tx][ty] == 'R'
        || Board[tx][ty] == 'B') {
        printf("\nError, wrong movement B, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Knightw(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'N') {
        printf("\nError, wrong figure, expected P\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement N, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement N, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'K' || Board[tx][ty] == 'P' || Board[tx][ty] == 'Q'
        || Board[tx][ty] == 'N' || Board[tx][ty] == 'R'
        || Board[tx][ty] == 'B') {
        printf("\nError, wrong movement N, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Pawn(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'p') {
        printf("\nError, wrong figure, expected p\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement p, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement P, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'k' || Board[tx][ty] == 'p' || Board[tx][ty] == 'q'
        || Board[tx][ty] == 'n' || Board[tx][ty] == 'r'
        || Board[tx][ty] == 'b') {
        printf("\nError, wrong movement p, attacking teammate \n");
        return 3;
    }
    return 0;
}
int King(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'k') {
        printf("\nError, wrong figure, expected k\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement k, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement k, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'k' || Board[tx][ty] == 'p' || Board[tx][ty] == 'q'
        || Board[tx][ty] == 'n' || Board[tx][ty] == 'r'
        || Board[tx][ty] == 'b') {
        printf("\nError, wrong movement k, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Queen(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'q') {
        printf("\nError, wrong figure, expected q\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement q, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement q, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'k' || Board[tx][ty] == 'p' || Board[tx][ty] == 'q'
        || Board[tx][ty] == 'n' || Board[tx][ty] == 'r'
        || Board[tx][ty] == 'b') {
        printf("\nError, wrong movement q, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Knight(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'n') {
        printf("\nError, wrong figure, expected n\n");

        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement n, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement n, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'k' || Board[tx][ty] == 'p' || Board[tx][ty] == 'q'
        || Board[tx][ty] == 'n' || Board[tx][ty] == 'r'
        || Board[tx][ty] == 'b') {
        printf("\nError, wrong movement n, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Bishop(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'b') {
        printf("\nError, wrong figure, expected b\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement b, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement b, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'k' || Board[tx][ty] == 'p' || Board[tx][ty] == 'q'
        || Board[tx][ty] == 'n' || Board[tx][ty] == 'r'
        || Board[tx][ty] == 'b') {
        printf("\nError, wrong movement b, attacking teammate \n");
        return 3;
    }
    return 0;
}
int Rook(char Board[8][8], int fx, int fy, int tx, int ty, char m)
{
    if (Board[fx][fy] != 'r') {
        printf("\nError, wrong figure, expected r\n");
        return 1;
    }
    if (Board[tx][ty] == ' ' && m == 'x') {
        printf("\nError, wrong movement r, expected  -  \n");
        return 2;
    }
    if (Board[tx][ty] != ' ' && m == '-') {
        printf("\nError, wrong movement r, expected  x  \n");
        return 4;
    }
    if (Board[tx][ty] == 'k' || Board[tx][ty] == 'p' || Board[tx][ty] == 'q'
        || Board[tx][ty] == 'n' || Board[tx][ty] == 'r'
        || Board[tx][ty] == 'b') {
        printf("\nError, wrong movement r, attacking teammate \n");
        return 3;
    }
    return 0;
}
