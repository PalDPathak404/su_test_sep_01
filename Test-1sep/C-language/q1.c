#include <stdio.h>

int main()
{
    char a;
    int num;
    scanf("%c",&a);
    num = (int)a;
    if(num > 47 && num < 58){
        printf("Digit");
    }
    else if(num > 64 && num < 91 || num > 96 && num < 123){
        printf("Alphabet");
    }
    else{
        printf("Special Symbol");
    }
}