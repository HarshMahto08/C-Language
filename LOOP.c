#include <stdio.h>
void main(){
    int i,num,sum=0;
    printf("enter nth number");
    scanf("%d",&num);
    for(i=0;i<=num;i++);
    {
        printf("%d",num);
        sum+=i;
        printf("\n%d",sum);
    }
    
}