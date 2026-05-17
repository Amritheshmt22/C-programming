// a logistic company wants to rotate a warehouse layout (rows become columns) for redisgn hall arrangements

#include <stdio.h>
#define ROWS 2
#define COLS 3

int main()
{
    int matrix [ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int transpose [COLS][ROWS];

    printf("transpose of the matrix is: \n");
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    for (int i=0; i<COLS; i++)
    {
        for (int j=0; j<ROWS; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}