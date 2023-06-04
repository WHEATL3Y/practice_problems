// Interative Fibonacci
// Author: Jacob Christensen

#include <stdio.h>
#include <limits.h>

#define LIMIT 100 

int willOverflow(unsigned long long n1, unsigned long long n2) {

    return (n2 > ULLONG_MAX - n1);

}

unsigned int fib() {

    unsigned long long n1 = 0;
    unsigned long long n2 = 1;
    unsigned long long n3;

    printf("%llu\n%llu\n", n1, n2);

    while (!willOverflow(n1, n2)) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%llu\n", n3);
    }

    return n3;

}

int main(void) {
    
    fib();
    printf("Long: %ul\nLong Long: %ull\n", ULONG_MAX, ULLONG_MAX);
    return 0;
}
