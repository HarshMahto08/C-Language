#include<stdio.h>
int main(){
    int arr[100],max,n;
    printf("enter the number of element :");
    scanf("%d",&n);
    printf("enter %d element:",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    max=arr[0];
    for(int i=1;i<n;i++)
    if(arr[i]> max)
    max=arr[i];
    printf("maximun in array is:%d",max);
    return 0;



}