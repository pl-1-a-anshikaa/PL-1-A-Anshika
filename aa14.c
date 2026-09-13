Program (14) → Write a program to generate the multiplication table of any number using white loop, do while loop and for loop.

Solution (14)-

#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d \n", num);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}