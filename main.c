#include <stdio.h>
#include "mm_malloc.h"
typedef struct {
    int a;
    int b ;
} Person1;

void test01(){
    int *c;
    int *d = 100;
    c = &d;
    printf("c value=%p  \n",c);
    printf("c value=%p",&d);
    printf("c value=%p", sizeof(c));
}
int main() {

    test01();
    Person1 *person1 = malloc(sizeof(Person1));
    person1->a = 100;
    person1->b = 22;
    printf("Hello, World!\n a= %d",person1->a);
    printf("b= %d",person1->b);
    return 0;
}
