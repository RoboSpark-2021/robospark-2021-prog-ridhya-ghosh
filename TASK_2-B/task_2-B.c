/*

B.
Code for dynamic array using malloc/calloc, take size from user take data inputs, print them,
again take size from user and realloc with new size, take user-data and again print new data.

*/

// Task 2-B
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    int *ptr = (int *)malloc(sizeof(int) * size);
    printf("\nEnter array elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nOur Array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\nEnter the new size of array: ");
    scanf("%d", &size);

    ptr = (int *)realloc(ptr, size * sizeof(int));

    printf("\nEnter new array elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nUpdated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}
// code by Abhishek Ikhar 