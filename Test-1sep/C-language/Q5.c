#include <stdio.h>

int main() {
    int num, test, digit, reverse;

    printf("Enter a number: ");
    scanf("%d", &num);

    test = num;
    reverse = 0;
    while(test != 0) {
        digit = test % 10;        
        reverse = reverse * 10 + digit;
        test /= 10; 
    }
    printf("Reversed number using for loop: %d\n", reverse);
    
    if(reverse == num){
        printf("THee given one is palindrome");
    }
    else{
        printf("This is not a palindrome");
    }
}