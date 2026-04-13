#include<stdio.h>

/**
 * This function checks if number is prime or not
 * 
 * @num: Input number to check
 */
void check_prime(int num)
{
    int count = 0;
    for(int i = 1; i < num; i++) {
        if(num%i == 0 ) {
            count++;
        }
    }
    if(count > 2) {
        printf("%d number is not prime.",num);
    } else {
        printf("%d number is prime.",num);
    }
}

void main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    check_prime(num);
}