#include <stdio.h>
int main(){
    int n , d , temp , total = 0; //fixed: initialized total to 0

    printf("enter the number:");
    scanf("%d",&n);

    temp = n; //fixed: saved the original number before n change

    while(n > 0)
    {
        d = n % 10;
        total = total + (d*d*d);
        n = n / 10;
    }
    if (temp == total){
        printf("this is armstrong value.\n");
    }else{
        printf("this is not a armstrong value.\n");
    }
    return 0;
}