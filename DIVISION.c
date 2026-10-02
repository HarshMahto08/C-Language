#include <stdio.h>
int main (){
    int a,b,q,r;
    printf("enter the two numbers a and b");
    scanf("%d",&a,&b);
    q=a/b;
    r=a%b;
    printf("quotient is when a/b is:%d\n",q);
    printf("remainder is when a%b is:%d\n",r);
    return 0;
}