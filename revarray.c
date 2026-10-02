#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    //printf("The original Array is:\n");
    printf("enter the  original %d elements:\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Reversed array is :\n");
    for (int i=n-1;i>=0;i--)
    printf("%d\t",arr[i]);
    return 0;
    
}