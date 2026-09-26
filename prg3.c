#include <stdio.h>
int main() {
    int a , b;
    printf("Enter a :");
    scanf("%d",&a);
    
    printf("Enter b :");
    scanf("%d",&b);

    int sum = a+b;
    printf("sum is : %d \n",sum);

    int diff = a-b;
    printf("difference is :%d\n", diff);

    int multi = a*b;
    printf("multliply is :%d\n", multi);

    int div =a/b;
    printf("division is :%d\n",div);

}