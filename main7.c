//
// Created by will on 2021/6/9.
//
#include <printf.h>
#include <stdio.h>

void test01(){
    int **p12;
//    printf("%p \n", sizeof(p12));

    char a = 'a';
    char *b = &a;
    printf("%p \n", sizeof(b));
}

int main(){
    test01();
    return 0;
}
