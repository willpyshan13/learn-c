//
// Created by will on 2021/6/9.
//
#include <printf.h>
#include "stdint.h"

void test01(){
    int a[] = {112,22,33,22};
    int b[] = {11};

    int * array[2] = {a,b};

    printf("%d \n",**array);

    printf("%d \n",*(*(array)+1));

    int *p1 = NULL;

    int a1 = 10;
    char c = "c";
    printf("%d \n",sizeof a1);
    printf("%d \n",sizeof(c));
    printf("%d \n",sizeof(a));

    printf("%d \n",a1);
    int *p = &a1;
    *p = 33;

    printf("%d",a1);
}

int main(){
    test01();
    return 0;
}
