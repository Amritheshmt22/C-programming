//multidimensional 2D array
#include <stdio.h>
int main()
    {
    int arr[3][2] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}