#include <stdio.h>
int main(){
    int grade;
    printf("ENTER THE STUDENT GRADE(0-100)");
    scanf("%d",&grade);
    if("grade<0 || grade>100")
    {
        printf("\ninvalid",grade);
    }
    if(grade>90)
    {
        printf("grade:A\n",grade);
    }
    if else(grade>80)
    {
        printf("grade:B\n",grade);
    }
    if else(grade>70)
    {
        printf("grade:C\n",grade);
    }
    if else(grade>60)
    {
        printf("grade:D\n"),grade;
    }
    if else(grade>50)
    {
        printf("grade:E\n",grade);
    }
    else
    {
        printf("failed\n", grade);
    }    
    return 0;
}

