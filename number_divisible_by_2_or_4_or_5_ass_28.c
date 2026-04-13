#include<stdio.h>

/**
 * Main entry of code.
 * @return : always 0
 */
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);
    if(num % 2 == 0 || num % 4 == 0 || num % 5 == 0) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
