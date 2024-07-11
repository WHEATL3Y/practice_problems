#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int max = 0;
    int sp = 0;
    unsigned long seen[2] = {0};
    unsigned long mask = 1;
    char c;
    int l = strlen(s);

    for (int head, tail = 0; head < l; head++) {
        c = s[head];
        mask = 1UL << ((c > 63) ? c - 64 : c);
        if (!(seen[(sp = c >> 6)] & mask)) {
            seen[sp] |= mask;
            max = head - tail + 1 > max ? head - tail + 1 : max;
        }
        else {
            while (seen[(sp = c >> 6)] & mask) {
                seen[sp] ^= mask;
                c = s[tail++];
                mask = 1UL << ((c > 63) ? c - 64 : c);
            }
            c = s[head];
            mask = 1UL << ((c > 63) ? c - 64 : c);
            seen[c / 64] |= mask;
        }
    }

    return max;
}
