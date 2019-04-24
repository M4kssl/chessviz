#include "cmove.h"
#include "board.h"
#include "figures.h"
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

    if (white[2] < '1' || white[2] > '8') {
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
    switch (figw) {
    case 'P':
        print = Pawnw(Board, x, y, xt, yt, mvw);
        break;
    case 'K':
        print = Kingw(Board, x, y, xt, yt, mvw);
        break;
    case 'B':
        print = Bishopw(Board, x, y, xt, yt, mvw);
        break;
    case 'Q':
        print = Queenw(Board, x, y, xt, yt, mvw);
        break;
    case 'N':
        print = Knightw(Board, x, y, xt, yt, mvw);
        break;
    case 'R':
        print = Rookw(Board, x, y, xt, yt, mvw);
        break;
    }
    if (print == 0) {
        Board[x][y] = ' ';
        Board[xt][yt] = figw;
    }

    x = fxb - 48, y = fyb - 96, xt = txb - 48, yt = tyb - 96;
    x = 8 - x;
    y--;
    xt = 8 - xt;
    yt--;
    switch (figb) {
    case 'p':
        pr = Pawn(Board, x, y, xt, yt, mvb);
        break;
    case 'k':
        pr = King(Board, x, y, xt, yt, mvb);
        break;
    case 'b':
        pr = Bishop(Board, x, y, xt, yt, mvb);
        break;
    case 'q':
        pr = Queen(Board, x, y, xt, yt, mvb);
        break;
    case 'n':
        pr = Knight(Board, x, y, xt, yt, mvb);
        break;
    case 'r':
        pr = Rook(Board, x, y, xt, yt, mvb);
        break;
    }
    if (pr == 0 && print == 0) {
        printf("\n\n\n\n");
        Board[x][y] = ' ';
        Board[xt][yt] = figb;
        PrintBoard(Board);
    }
    return 0;
}