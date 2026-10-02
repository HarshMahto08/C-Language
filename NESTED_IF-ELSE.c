#include <stdio.h>
int main(){
    int num1;
    printf("ENTER THE NUMBER:",num1);
    scanf("%d",&num1);
    if(num1>0)
    {
        printf("the number is positive %d\n",num1);
    }
    else
    {
    if(num1<0)
    {
        printf("the number is negative %d\n",num1);
    }
    else
    {
        printf("numer is zero",num1);
    }
    }
    return 0;
}        
