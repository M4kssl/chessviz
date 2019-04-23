#include "cmove.h"
#include "board.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Mcheck(char Board[8][8], char* s, char* white, char* black)
{
    char fxw, fyw, fyb, tyb, tyw, txw, fxb, txb;
    char figw, figb;
    int print = 50, pr = 50;
    char mvw = white[3], mvb = black[3];
    figw = white[0], figb = black[0];
    if (white[1] < 'a' || white[1] > 'h') {
        printf("Out of the board 1\n");
        return 1;
    } else {
        fyw = white[1];
    }

    if (white[2] < '1' || white[2] > '2') {
        printf("Out of the board 2\n");
        return 0;
    } else {
        fxw = white[2];
    }

    if (white[4] < 'a' || white[4] > 'h') {
        printf("Out of the board 3\n");
        return 0;
    } else {
        tyw = white[4];
    }

    if (white[5] < '1' || white[5] > '8') {
        printf("Out of the board 4\n");
        return 0;
    } else {
        txw = white[5];
    }

    if (black[1] < 'a' || black[1] > 'h') {
        printf("Out of the board 5\n");
        return 0;
    } else {
        fyb = black[1];
    }

    if (black[2] < '1' || black[2] > '8') {
        printf("Out of the board 6\n");
        return 0;
    } else {
        fxb = black[2];
    }

    if (black[4] < 'a' || black[4] > 'h') {
        printf("Out of the board 7\n");
        return 0;
    } else {
        tyb = black[4];
    }

    if (black[5] < '1' || black[5] > '8') {
        printf("Out of the board 8\n");
        return 0;
    } else {
        txb = black[5];
    }

    int x = fxw - 48, y = fyw - 96, xt = txw - 48, yt = tyw - 96;
    x = 8 - x;
    y--;
    xt = 8 - xt;
    yt--;

    Board[x][y] = ' ';
    Board[xt][yt] = figw;

    printf("from:%d %d to:%d %d\n", x, y, xt, yt);
    x = fxb - 48, y = fyb - 96, xt = txb - 48, yt = tyb - 96;
    x = 8 - x;
    y--;
    xt = 8 - xt;
    yt--;

    printf("from:%d %d to:%d %d\n", x, y, xt, yt);
    Board[x][y] = ' ';
    Board[xt][yt] = figb;
    PrintBoard(Board);

    return 0;
}