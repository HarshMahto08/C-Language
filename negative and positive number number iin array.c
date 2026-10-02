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
	printf("The positive number is: ");
	for(int i=0;i<size;i++){
		if(arr[i]>0){
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
	printf("The negative number is: ");
	for(int i=0;i<size;i++){
		if(arr[i]<0){
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
	return 0;
}
