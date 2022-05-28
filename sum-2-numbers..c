#include<stdio.h>

int main(){
    int number1, number2 , sum;

    printf( " Enter two Entegers " ) ;
    scanf("%d %D", &number1, &number2 ) ;

    // now we are calculating the sum of both 

    sum = number1 + number2 ;

    printf("%d+ %d = %d ", number1, number2 , sum ) ;
    return 0 ;
    
}
