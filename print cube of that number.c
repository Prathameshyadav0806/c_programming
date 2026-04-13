#include<stdio.h>

/**
 * Function use to return cube of given number.
 * @prama num: Input number
 * @return : Cube of number
 */
int cube(int num)
{
    return num * num * num;
}

/**
 * Main entry of code.
 * @return : always 0
 */
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);
    printf("Cube of the %d = %d", num, cube(num));
    return 0;
}