#include<stdio.h>
int fibonacci(int);
int main(){
	int n,fibo,i=0;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fibo=fibonacci(i);
		printf("%d\t",fibo);
	}
	return 0;
}
int fibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}
