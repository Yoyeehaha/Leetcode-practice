void reverse(int* nums, int s, int e) {
    int start = s;
    int end = e;

    while (end > start){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        end--;
        start++;
    }

    return;
    
}

void rotate(int* nums, int numsSize, int k) {
    
    k = k % numsSize;

    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);

    return;
}