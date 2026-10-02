#include <stdio.h>
int main(){
    int a,b;
printf("ENTER TWO NUMBERS:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("AFTER SWAPPING \n");
printf("FIRST SWAPPING %d\n",a);
printf("SECOND SWAPPING %d\n",b);
return 0;
}

