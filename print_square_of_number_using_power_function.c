#include<stdio.h>
#include<math.h>
int main(){
    int a;
    int power=2;
    int ans;
    printf("Enter Number :");
    scanf("%d",&a);
    ans = pow(a,power);
    printf("Power of %d = %d",a,ans);
    return 0;
}