//
// Created by will on 2021/6/9.
//
#include <printf.h>
#include "stdint.h"

void test01(){
    int a[] = {112,22,33};
    int b[] = {11};

    int * array[2] = {a,b};

    printf("%d \n",**array);

    printf("%d \n",*(*(array)+1));
}

int main(){
    test01();
    return 0;
}
