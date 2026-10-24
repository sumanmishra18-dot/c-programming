#include <stdio.h>
int main(){
    int n,d,rev = 0;
// converting the number into the word
    printf("enter the number:");
    scanf("%d",&n);
    while ( n!=0 )
    {
    d = n % 10;
    rev = (rev*10) +d ;
    n = n / 10 ;
    }
    while(rev!=0)
    {
    d = rev % 10;
    rev =rev/10;
    switch(d)
    {
        case 0:
        printf("zero");
        break;
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break; 
        case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;                                                                            
    }
    }
    return 0;
}