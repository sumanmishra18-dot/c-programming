#include <stdio.h>
//area of rectangle , square , circle and triangle
int main() {  
    int a , b, r, side,d,f;
    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);
    
    int rect = a*b;
    printf("Area of rectangle is :%d\n",rect);
     
    printf("Enter the value of side :");
    scanf("%d",&side);

    int square = side*side;
    printf("Area of square is :%d\n",square);

    printf("Enter the value of r : ");
    scanf("%d",&r);

    int circle =3.14*r*r;
    printf("Area of cirle is :%d\n",circle);
     
    printf("Enter he value of d:");
    scanf("%d",&d);

    printf("enter the value of f:");
    scanf("%d",&f);

    int triangle = d*f/2;
    printf("Area of triangle is :%d\n",triangle);

    
}