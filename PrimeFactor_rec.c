# include<stdio.h>
void primefactor(int n,int factor){
if(n==1)
{
    return;
}    
if(n%factor==0){
printf("%d", factor);
primefactor(n/factor,factor);
}
else
{
    primefactor(n,factor+1);
}
}
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("primefactor of %d are: %d ",num);
    primefactor(num,2);
    return 0;
}