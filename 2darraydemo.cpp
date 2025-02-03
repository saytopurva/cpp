#include <stdio.h>
void main
{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n\t Enter a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\t the array is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    getch();
}