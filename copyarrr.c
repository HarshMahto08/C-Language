#include <stdio.h>
int main(){
    int arr1[100],arr2[100],n;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter the elements arr[1]:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    for(int i=0;i<n;i++)
    arr2[i]=arr1[i];
    printf("copied array:\n");
    for(int i=0;i<n;i++)
    printf("%d",arr2[i]);
    return 0;
}