#include<stdio.h>
int main(){
	int r,c;
	printf("Enter rows and columns: ");
	scanf("%d%d",&r,&c);
	int arr1[r][c],arr2[r][c],sum_result[r][c];
	printf("Enter elements of first array: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elements fo second array: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	//Display The Two Arrays
	printf("The 1st array are: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",arr1[i][j]);
		}
	}
	printf("\n");
	printf("The 2nd array are: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",arr2[i][j]);
		}
	}
	printf("\n ***********");
	//Sum of 2 Arrays
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sum_result[i][j]=arr1[i][j] + arr2[i][j];
		}
	}
	printf("\n");
	//Display the result 
	printf("The sum of two matrices: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",sum_result[i][j]);
		}
	}
	printf("\n");
	return 0;
}

// Output:
// Enter rows and columns: 
// 2 3

// Enter elements of first array: 
// 1 
// 2 
// 3 
// 4 
// 5 
// 6 

// Enter elements of second array:
// 7 
// 8 
// 9 
// 10 
// 11 
// 12 

// The first array is:
// 1	2	3	
// 4	5	6	

// The second array is:
// 7	8	9	
// 10	11	12	

// ***********

// The sum of two matrices/array:
// 8	10	12	
// 14	16	18