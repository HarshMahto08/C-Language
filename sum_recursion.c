# include <stdio.h>
int sum_num(int n){
    if(n==1){
    return 1;
}
else
{
    return n+sum_num(n-1);
}
}
int main(){
    int sum=sum_num(25);
    printf("Sum of First 25 natural no. are: %d\n",sum);
    return 0;
}