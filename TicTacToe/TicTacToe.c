#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("**********************************\n");
    printf("*******       1:play       *******\n");
    printf("*******       0:quit       *******\n");
    printf("**********************************\n");
    printf("请输入你的选择:");
}

int main()
{
    int input = 0;
    do
    {
        menu();
        scanf("%d", &input);
        switch (input)
        {
            case 1:
            printf("三子棋游戏:\n");
            break;
            case 0:
            printf("退出游戏\n");
            break;
            default:
            printf("输入错误，请重新选择:\n");
            break;
        }
    } while (input);
    system("pause");
    return 0;
}