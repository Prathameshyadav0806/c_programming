#include<stdio.h>

/**
 * Main entry of code.
 * @return : always 0
 */
int main()
{
    int a;
    printf("Enter any number between 1to 100:");
    scanf("%d", &a);
    if (a != 100){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}