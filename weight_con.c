#include <stdio.h>
# include <math.h>
int main(){
int choice =0;
float kilograms=0.0f;
float grams=0.0f;

printf("weight conversion calculator:\n");
printf("1.Kilograms to Grams: \n");
printf("2. GRAMS to Kilograms: \n");
printf("Enter your choice (1 or 2):");
scanf("%d",&choice);
if(choice==1){
printf("enter the weight in kilograms:");
scanf("%f",&kilograms);
grams=kilograms*1000;
printf("%.2f kilograms is equal to %.2f grams\n",kilograms,grams);
}
else if (choice==2){
printf("enter the weight in grams:");
scanf("%f",&grams);
kilograms=grams/1000;
printf("%.2f grams is equal to %.2f kilograms\n",grams,kilograms);
}
else{
printf("Invalid choice!Please enter 1 or 2\n");}
return 0;
}
