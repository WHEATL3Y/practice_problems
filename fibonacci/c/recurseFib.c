// Fibonicci
// Author: Jacob Christensen

#include <stdio.h>

#define LIMIT 10

int fib(int n) {

    if (n <= 1) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }

}

int main(void) {

    printf("%d\n", fib(LIMIT));
    return 0;

}
