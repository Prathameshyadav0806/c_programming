#include<stdio.h>

/**
 * Main enttry of code.
 * @return : always 0
 */
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("%d is even number.", num);
    } else {
        printf("%d is odd number.", num);
    }
    return 0;
}
