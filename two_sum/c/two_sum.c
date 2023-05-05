/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int* answer;

    answer = (int*) malloc(sizeof(int) * 2);
    answer[0] = 0;
    answer[1] = 0;

    for (int i; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *returnSize = 2;
                answer[0] = i;
                answer[1] = j;
                return answer;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
