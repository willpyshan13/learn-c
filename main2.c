//
// Created by will on 2021/6/8.
//
#include <printf.h>
#include "stdint.h"

void test01(){
    int a = 0x22223333;

    int *p1 = &a;

    char *p2 = &a;
    printf("%x \n",*p2);
    printf("%d \n",p2);
    printf("%d \n",p2+1);
    printf("%d \n",p1);
    printf("%d \n",p1+1);
}
int main(){
    test01();
    return 0;
}
