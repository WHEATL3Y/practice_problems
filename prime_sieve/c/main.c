// Prime Number Sieve
// 
// Author(s): Jacob Christensen

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int calculateTo = 1000000;
    int primesCount = 1;
    int* primes;
    int primesPos = 0;
    int primeFlag = 0;

    primes = (int *) malloc(100000 * sizeof(int));
    primes[0] = 2;

    for (int i = 3; i < calculateTo; i++) {
        primeFlag = 1;
        for (int j = 0; j <= primesPos; j++) {
            int p = primes[j];
            /* if (p * p > i) { */
            if (p > sqrt(i)) {
                break;
            }
            else if (i % p == 0) {
                primeFlag = 0;
                break;
            }
            else {
                continue;
            }
        }
        
        if (primeFlag == 1) {
            primesCount++;
            primes[++primesPos] = i;
        }

    } 

    printf("%d\n", primesCount);

    return EXIT_SUCCESS;
}
