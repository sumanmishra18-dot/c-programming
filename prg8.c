#include <Stdio.h>
int main(){
    float c ;
  
    printf("enter the value of temperature in c :");
    scanf("%f",&c);

    float f = (9/5)*c + 32;
    printf("the temperature in fahrenheit is : %f \n",f);

    return 0;

}

