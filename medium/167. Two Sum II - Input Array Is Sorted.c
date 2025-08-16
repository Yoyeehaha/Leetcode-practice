/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;
    int* answer = (int*)calloc(2, sizeof(int));
    int sum = 0;
    *returnSize = 2;


    while(left < right) {
        sum = numbers[left] + numbers[right];

        if(sum > target) {
            right--;
        } else if(sum < target) {
            left++;
        } else {
            answer[0] = ++left;
            answer[1] = ++right;
            break;
        }
    }

    return answer;
}