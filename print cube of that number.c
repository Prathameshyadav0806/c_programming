#include<stdio.h>
int cube(int n){
    return n*n*n;
}
void main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    printf("Cube of the %d = %d",num,cube(num));
}