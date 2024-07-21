#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    size_t i1 = 0;
    size_t i2 = 0;
    size_t n = 0;
    size_t mergedSize = nums1Size + nums2Size;
    size_t middle = mergedSize / 2;;
    int* merged = (int*) malloc(sizeof(int) * (nums1Size + nums2Size));

    while (i1 < nums1Size && i2 < nums2Size) {
        merged[n++] = (nums1[i1] < nums2[i2]) ? nums1[i1++] : nums2[i2++];
    }

    if (i1 == nums1Size) {
        while (i2 < nums2Size) {
            merged[n++] = nums2[i2++];
        }
    }
    if (i2 == nums2Size) {
        while (i1 < nums1Size) {
            merged[n++] = nums1[i1++];
        }
    }

    if ((nums1Size + nums2Size) % 2 == 0) {
        return (merged[middle] + merged[middle - 1]) / 2.0;
    }
    else {
        return merged[middle];
    }
}
