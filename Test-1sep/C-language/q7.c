#include <stdio.h>
int main()
{
    int num,cube,sum=0,digi;
    scanf("%d",&num);
    while(num >0){
        digi=num%10;
        cube = digi*digi*digi;
        sum = sum +cube;
        num /= 10;
    }
    if(sum == num){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }
}