#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;
    int **pptr;

    ptr = &a;
    pptr = &ptr;

    printf("Value of a = %d\n", a);
    printf("Using ptr = %d\n", *ptr);
    printf("Using pptr = %d\n", **pptr);


    **pptr = 20;

    printf("After modification:\n");
    printf("Value of a = %d\n", a);

    return 0;
}