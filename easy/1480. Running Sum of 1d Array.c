/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int sum = 0;
    int *answer = malloc(sizeof(int) * numsSize);

    for(int i = 0;i < numsSize;i++) {
        sum += nums[i];
        answer[i] = sum;
    }

    return answer;
}