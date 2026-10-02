#include<stdio.h>
void main(){
int arr[100],n,temp;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter elements:\n");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
temp=arr[0];
arr[0]=arr[n-1];
arr[n-1]=temp;
printf("after swap:\n");
for(int i=0;i<n;i++){
printf("%d\t",arr[i]);
}
}