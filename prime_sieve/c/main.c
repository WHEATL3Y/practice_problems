// Prime Number Sieve
// 
// Author(s): Jacob Christensen

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double calcE(int);

long double calcE(int limit) {

    long double runningTotal = 0;
    int factorial = 1;
    int i = 0;

    while (i < limit) {
        
        if (i <= 1) {
            runningTotal += 1;
        }
        else {
            runningTotal += 1.0 / (factorial *= i);
        }
        i++;
    }

    return runningTotal;
}

int main(void) {

    // Tests    
    printf("Testing: calcE(10): %.100Lf\n", calcE(10));

    return EXIT_SUCCESS;
}
