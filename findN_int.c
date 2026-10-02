#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter the number of elements(upto 100):");
    scanf("%d",&n);
    printf("enter the %d integers:",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n<100 || n>1){
    printf("invalid input,enter between number (1-100)");
    return 1;
    }
    printf("the integers in the array is:\n");
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\n");
    return 0;
}