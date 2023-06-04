// Interative Fibonacci
// Author: Jacob Christensen

#include <stdio.h>
#include <limits.h>

#define LIMIT 100 

int willOverflow(unsigned long n1, unsigned long n2) {

    return (n2 > ULONG_MAX - n1);

}

unsigned int fib() {

    unsigned long n1 = 0;
    unsigned long n2 = 1;
    unsigned long n3;

    printf("%lu\n%lu\n", n1, n2);

    while (!willOverflow(n1, n2)) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%lu\n", n3);
    }

    return n3;

}

int main(void) {
    
    fib();
    return 0;
}
