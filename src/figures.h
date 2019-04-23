#ifndef FIGURES_H
#define FIGURES_H

#include "cmove.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int Kingw(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Pawnw(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Bishopw(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Knightw(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Queenw(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Rookw(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int King(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Pawn(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Bishop(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Knight(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Queen(char Board[8][8], int fx, int fy, int tx, int ty, char m);
int Rook(char Board[8][8], int fx, int fy, int tx, int ty, char m);
#endif