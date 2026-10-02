#include <stdio.h>
#include  <string.h>
int main(){
    // SHOPPING CART PROGRAM

    char item [50]="";
    float price =0.0f;
    int quantity =0;
    char currency='$';
    float total=0.0f;

    printf("WHAT ITEM YOU LIKE TO BUY?:");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]='\0';

    printf("what is the price of each?:");
    scanf("%f",&price);

    printf("how many you would like?:");
    scanf("%d",&quantity);

    total=price*quantity;

    printf("\n you have bought %d %s/s\n",quantity,item);
    printf("total amount is=%c%.2f",currency,total);

    return 0;
}