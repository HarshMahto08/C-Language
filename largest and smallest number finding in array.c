#include<stdio.h>
int main(){
	int arr[100],size;
	printf("Enter size: ");
	scanf("%d",&size);
	//Enter elements
	printf("Enter elements in array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int largest=arr[0];
	int smallest=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
    printf("The smallest number in the array is: %d\n", smallest);
    printf("The largest number in the array is: %d\n", largest);
	return 0;
}
