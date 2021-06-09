//
// Created by will on 2021/6/9.
//
#include <printf.h>
#include "stdint.h"

void test01(){
    int a = 0;
    int b = 11;
    int *a1 = &a;
    int *b1 = &b;

    int * array[2] = {a1,b1};

    printf("%d \n",*array[0]);


}

int main(){
    test01();
    return 0;
}
