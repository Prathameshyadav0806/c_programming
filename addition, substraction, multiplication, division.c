#include<stdio.h>
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
int main(){
    float x,y;
    int choice;
    printf("Enter 2 numbers :");
    scanf("%f %f",&x,&y);
    printf("\n1.addition\n2.subtraction\n3.multiplication\n4.division\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Addition of %f and %f = %f",x,y,add(x,y));
            break;
        case 2:
            printf("subtraction of %f and %f = %f",x,y,sub(x,y));
            break;
        case 3:
            printf("multiplication of %f and %f = %f",x,y,mul(x,y));
            break;
        case 4:
            printf("division of %f and %f = %f",x,y,div(x,y));
            break;
        default:
            printf("Invalid choice..!");
            break;
    }
    return 0;
}