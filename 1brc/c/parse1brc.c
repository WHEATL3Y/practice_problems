#include <stdio.h>

int lines(FILE* f) {
    char c;
    size_t i = 0;
    size_t count = 0;

    while ((c = getc(f)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }
    return count;
}

int main(void) {
    FILE* f = fopen("../../../1brc/measurements.txt", "r");
    if (f == NULL) {
        printf("Failed to open file");
        return 1;
    }
    printf("Lines: %d", lines(f));
    return 0;
}
