#include <stdio.h>
int main(){
    char ch;
    int lower_case1,upper_case1;
    printf("enter the variable:");
    scanf("%c",&ch);
    lower_case1=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    upper_case1=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lower_case1||upper_case1)
    {
    printf("this is vowel %c\n",ch);
    }
    else
    {
    printf("this is consonant");
    }
    return 0;
}