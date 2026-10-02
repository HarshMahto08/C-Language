#include <stdio.h>
int fibonacci(int n){
if(n<=1){
return n;
}
else{
return fibonacci(n-1)+fibonacci(n-2);
}
}
int main(){
   // int num,n;
    //printf("Enter a number: ");
    //scanf("%d", &num);
    int n=25;
    printf("First %d of terms of fibonacci sequence :%d\n",n);
    for(int i=0;i<n;i++){
    printf(" %d",fibonacci(i));
    }
    printf("\n");
    return 0;
}