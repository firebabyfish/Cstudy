#define _CRT_SECURE_NO_WARNINGS -1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINE 3
#define LIST 3

//初始化棋盘
void Init_Board(char board[LINE][LIST], int line, int list);

//打印棋盘
void Print_Board(char board[LINE][LIST], int line, int list);

//玩家下棋
void Player_Time(char board[LINE][LIST], int line, int list);

//电脑下棋
void Computer_Time(char board[LINE][LIST], int line, int list);

//判断胜负
char Is_Win(char board[LINE][LIST], int line, int list);

//判断棋盘是否已满
int Is_Full(char board[LINE][LIST], int line, int list);