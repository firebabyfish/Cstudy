#include "game.h"

//对棋盘进行初始化
void Init_Board(char board[LINE][LIST], int line, int list)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < line; i++)
    {
        for (j = 0; j < list; j++)
        {
            board[i][j] = ' ';
        }
    }
}

//打印棋盘
void Print_Board(char board[LINE][LIST], int line, int list)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < line; i++)
    {
        for (j = 0; j < line; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < line - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < list - 1)
        {
            for (j = 0; j < list; j++)
            {
                printf("---");
                if (j < line - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

//玩家下棋
void Player_Time(char board[LINE][LIST], int line, int list)
{
    int x = 0;
    int y = 0;
    printf("玩家的回合:\n");
    printf("请输入下棋的坐标:>");
    while (1)
    {
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= line && y >= 1 && y <= list)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("此坐标已被占用，请重新输入:>");
            }
        }
        else
        {
            printf("坐标非法，请重新输入:>");
        }
    }
}

//电脑下棋
void Computer_Time(char board[LINE][LIST], int line, int list)
{
    printf("电脑的回合:>\n");
    int x = rand() % line;
    int y = rand() % list;
    while (board[x - 1][y - 1] == ' ')
    {
        board[x - 1][y - 1] = '#';
        break;
    }
}

//判断胜负
char Is_Win(char board[LINE][LIST], int line, int list)
{
    int i = 0;
    int j = 0;
    //行
    for (i = 0; i < line; i++)
    {
        j = 0;
        if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
        {
            return board[i][j];
            break;
        }
    }
    //列
    for (j = 0; j < list; j++)
    {
        i = 0;
        if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
        {
            return board[i][j];
            break;
        }
    }
    //左对角
    i = j = 1;
    if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] != ' ')
    {
        return board[i][j];
    }
    //右对角
    if (board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i - 1][j + 1] && board[i][j] != ' ')
    {
        return board[i][j];
    }

    //平局
    int ret = Is_Full(board, line, list);
    if (ret)
    {
        return 'P';
    }
    else
    {
        return 'C';
    }
}

//判断棋盘是否已满
int Is_Full(char board[LINE][LIST], int line, int list)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < line; i++)
    {
        for (j = 0; j < list; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}