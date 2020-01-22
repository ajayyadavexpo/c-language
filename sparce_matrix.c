/*
A Sparse Matrix is a matrix(two-dimensional array) in which number of 0's is greater than the number of non-zero elements.

*/

#include<stdio.h>

int main()
{
    int n, m, c, d, matrix[10][10];
    int counter = 0;
    printf("\nEnter the number of rows and columns of the matrix \n\n");
    scanf("%d%d",&m,&n);

    printf("\nEnter the %d elements of the matrix \n\n", m*n);
    for(c = 0; c < m; c++)   
    {
        for(d = 0; d < n; d++)   
        {
            scanf("%d", &matrix[c][d]);
            if(matrix[c][d] == 0)
            counter++;  
        }
    }


    printf("\nThe entered matrix is: \n\n");
    for(c = 0; c < m; c++)   
    {
        for(d = 0; d < n; d++)   
        {
            printf("%d\t", matrix[c][d]);
        }
    printf("\n"); 
    }

    
    if(counter > (m*n)/2)
        printf("\n\nThe entered matrix is a sparse matrix\n\n");
    else
        printf("\n\nThe entered matrix is not a sparse matrix\n\n");

    return 0;
}