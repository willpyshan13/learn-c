//
// Created by will on 2021/6/9.
//
#include <printf.h>
#include "stdint.h"
void test01(){
    int  array[9] = {1,2,3,4,5,6,7,8,9};
    printf("%x  \n",array[1]);
    printf("%p  \n",array);
    printf("%p  \n",&array);
    printf("%p  \n",&array[0]);
    printf("%d  \n",*(array+1));

    int *p = array;
    for (int i = 0; i < 8; ++i) {
        printf("%d  \n",p+i);
    }
}

int main(){
    test01();
    return 0;
}