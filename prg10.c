#include <stdio.h>
int main(){
    int L, n1, n2 , n3;
    printf("Enter the three number:");
    scanf("%d%d%d",&n1,&n2,&n3);
    L=(n1>n2) ? ((n1>n3) ? n1:n3):((n2>n3) ? n2:n3);
    printf("the largest no is:%d",L);
    return 0;
}