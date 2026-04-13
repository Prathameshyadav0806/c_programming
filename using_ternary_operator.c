#include <stdio.h>

/**
 * Main entry of code.
 * @return : always 0
 */
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    num > 100 ? printf("True") : printf("False");

    return 0;

}