#include <stdio.h>

int main()
{
    int first,second,third,fourth,fifth,total,perc;
    printf("Marks = ");
    scanf("%d %d %d %d %d",&first,&second,&third,&fourth,&fifth);
    total = first +second +third +fourth +fifth;
    perc = total / 5;
    
    if( perc >= 90){
        printf("Percentage = %d \n Grade A+",perc);
    }
    else if(perc >= 80){
        printf("Percentage = %d \n Grade A",perc);
    }
    else if(perc >= 70){
        printf("Percentage = %d \n Grade B",perc);
    }
    else if(perc >= 60){
        printf("Percentage = %d \n Grade C",perc);
    }
    else if(perc >= 50){
        printf("Percentage = %d \n Grade D",perc);
    }
    else if(perc >= 40){
        printf("Percentage = %d \n Grade E",perc);
    }
    else{
        printf("Fail");
    }
}
