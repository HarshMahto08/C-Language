#include <stdio.h>
int main(){
    int int_type;
    float float_type;
    char char_type;
    double double_type;

    printf("the size of int:%zu\n",sizeof(int_type));
    printf("the size of float:%zu\n",sizeof(float_type));
    printf("the size of char:%zu\n",sizeof(char_type));
    printf("the size of double:%zu\n",sizeof(double_type));
    return 0;
    }