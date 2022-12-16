#include "game.h"

void menu()
{
    printf("**********************************\n");
    printf("*******       1:play       *******\n");
    printf("*******       0:quit       *******\n");
    printf("**********************************\n");
    printf("请输入你的选择:");
}

void game()
{
    char board[LINE][LIST] = { 0 };
    char ret = 0;

    //初始化键盘
    Init_Board(board, LINE, LIST);

    //打印键盘
    Print_Board(board, LINE, LIST);

    while (1)
    {
        //玩家下棋
        Player_Time(board, LINE, LIST);
        Print_Board(board, LINE, LIST);

        //判断玩家胜负
        ret = Is_Win(board, LINE, LIST);
        if (ret != 'C')
            break;

        //电脑下棋
        Computer_Time(board, LINE, LIST);
        Print_Board(board, LINE, LIST);

        //判断玩家胜负
        ret = Is_Win(board, LINE, LIST);
        if (ret != 'C')
            break;
    }
    switch (ret)
    {
    case '*':
        printf("玩家赢了！\n");
        break;
    case '#':
        printf("电脑赢了！\n");
        break;
    default:
        printf("平局了。\n");
        break;
    }
    Print_Board(board, LINE, LIST);
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("三子棋游戏:\n");
            game();
            break;
        case 0:
            printf("退出游戏！\n");
            break;
        default:
            printf("输入错误，请重新选择:\n");
            break;
        }
    } while (input);
    return 0;
}