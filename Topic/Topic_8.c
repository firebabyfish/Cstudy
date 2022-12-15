#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20] = { 0 };
    int i, j, t;
    printf("input 20 numbers:>\n");
    for (i = 0; i < 20; i++)
    {
        //scanf("%d", &arr[i]);
        arr[i] = 2 * i;
    }
    printf("\n");
    for (i = 0; i < 19; i++)
    {
        for (j = 0; j < 19 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("the sorted numbers;\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}