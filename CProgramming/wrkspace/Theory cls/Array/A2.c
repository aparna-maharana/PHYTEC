/* WACP Addition of 3*3 matrix */
#include <stdio.h>
#define row 3
#define col 3
int main()
{
    int i,j;
    int a[row][col], b[row][col], c[row][col];
    printf("Enter the first matrix:\n");
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
        scanf("%d", &a[i][j]);
    printf("Enter the second matrix:\n");
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
        scanf("%d", &b[i][j]);
    /* Addition */
    for(i=0; i<row; i++)
       for(j=0; j<col; j++)
       c[i][j] = a[i][j] + b[i][j];
       printf("Addition of two matrix:%d\n", c[i][j]);
}
