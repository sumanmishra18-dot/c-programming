#include <stdio.h>
int main(){
    int num1 , num2;
    printf("enter your number 1:");
    scanf("%d&num1");
    printf("enter your number2:");
    scanf("%d&num2");
    if (num1<num2){
       printf("number1 is greater than number2");
    }
    else{
        printf("number2 is greater than number1");
    }
    return 0;

}