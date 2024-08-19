#include "stdio.h"

// ..




int foo(int) {
    a = a + 1; // acessa variavel global
    return a;
}

void main(void) {
    int a = 0; 
    int b = 0; 
    while (1) {
        a = foo(a);
        
        if (a > 5) {
            b = 1;
        }
    }
}
