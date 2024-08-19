#include "stdio.h"

// ..

int a = 0; // var global
int b = 0; // var global

int foo(int) {
    a = a + 1; // acessa variavel global
    return a;
}

void main(void) {
    while (1) {
        a = foo(a);
        
        if (a > 5) {
            b = 1;
        }
    }
}
