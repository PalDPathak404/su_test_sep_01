#include <stdio.h>
int main()
{
    int num,digi,sum = 0;
    scanf("%d",&num);
    do{
        digi = num %10;
        sum = sum +digi;
        num = num/10;
    }while(num >0);
    printf("Sum of digits :- %d",sum);
}