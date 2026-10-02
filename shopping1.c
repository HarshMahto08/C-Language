#include <stdio.h>
#include<string.h>
int main(){
char item[50]="";
float price =0.0f;
int quantity =0;
char currency='$';
float total=0.0f;
printf("what item you want ot buy?:");
fgets(item,sizeof(item),stdin);
item[strlen(item)-1]='\0';
printf("what is the price of each?:");
scanf("%f",&price);
printf("how many would like to?:");
scanf("%d", &quantity);
total=price*quantity;
printf("You have bought %d %s/s\n" ,quantity,item);
printf("The total amount is %c%.2f",currency,total);

return 0;
}