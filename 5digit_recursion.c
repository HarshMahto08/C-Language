#include <stdio.h>
int sum_digits(int n){
if(n==0)
    return 0;
else
    return(n%10+sum_digits(n/10));    
}
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("sum of digits:%d\n",sum_digits(num));
    return 0;
}