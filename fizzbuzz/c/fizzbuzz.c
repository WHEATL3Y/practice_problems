#include <stdio.h>

void fizzBuzz(void) {
    for (int i = 1; i < 100; i++) {
        int found = 0;
        if (i % 3 == 0) {
            found = 1;
            printf("Fizz");
        }
        if (i % 5 == 0) {
            found = 1;
            printf("Buzz");
        }
        if (!found) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    fizzBuzz();
    return 0; 
}
