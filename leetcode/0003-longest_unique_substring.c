#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int max = 0;
    int seen[128] = {[0 ... 127] = -1};
    int l = strlen(s);

    for (int head, tail = 0; head < l; head++) {
        if (seen[s[head]] == -1) {
            seen[s[head]] = head;
            max = head - tail + 1 > max ? head - tail + 1 : max;
        }
        else {
            while (seen[s[head]] != -1) {
                seen[s[tail]] = -1;
                tail++;
            }
            seen[s[head]] = head;
        }
    }

    return max;
}
