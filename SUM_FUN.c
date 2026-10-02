# include <stdio.h>
int sum(int a,int b)
{
int result ;
result = a+b;
return result;
}
int main()
{
    int num1,num2,total=0;
    printf("enter two numbers:");
    scanf("%d,%d",&num1,&num2);
    total=sum(num1,num2);
    printf("\n Total=%d+%d=%d",total);
    return 0;
}
//int sum(int a ,int b)
//{
//int result ;
//result = a+b;
//return result;
//}