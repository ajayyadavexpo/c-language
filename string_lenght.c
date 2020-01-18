#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];
    
    printf("Size of array : %d",sizeof(array) / sizeof(array[0]));

    return 0;
}
