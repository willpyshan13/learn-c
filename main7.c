//
// Created by will on 2021/6/9.
//
#include <printf.h>
#include <stdio.h>

void test01(){
//    int **p12;
////    printf("%p \n", sizeof(p12));
//
//    char a = 'a';
//    char *b = &a;
////    printf("%p \n", sizeof(b));
//    char *p = 'a';
//    char *name = &p;
////    printf("%c\n",name);
//
//    //===========
//    const int *c = 111;
//    //常量指针
//    // 指针和 const 谁在前先读谁 ；
//    //*象征着地址，const象征着内容；
//    //谁在前面谁就不允许改变。
//    const int *c1;
//    int const *c2;
//    //指针常量
//    int *const c3;
//
//    int m = 2;
//    int const * m1 = &m;
////    *m1 = 333;
//
////    int n = 2;
////    int n1 = 3;
////    int const *n2 = &n;
////    printf("%p \n",n2);
////    n2 = &n1;
////    printf("%p \n",n2);
//
//    int n = 2;
//    int n1 = 3;
//    int  *const n2 = &n;
//    printf("%d \n",*n2);
//    *n2 = 4;
//    printf("%d \n",*n2);

    int *s;
    printf("p 0x%x\n",s);
}

int main(){
    test01();
    return 0;
}
