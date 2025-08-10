int removeDuplicates(int* nums, int numsSize) {
    int cnt = 1;
    int cmp = nums[0];

    for (int i = 1;i < numsSize;i++) {
        if (nums[i] != cmp) {
            nums[cnt++] = nums[i];
            cmp = nums[i];
        } 
    }

    return cnt;
}

///////////////A better runtime solution////////////////////
int removeDuplicates(int* nums, int numsSize) {
    int cnt = 1;

    for (int i = 1;i < numsSize;i++) {
        if (nums[i-1] != nums[i]) {
            nums[cnt++] = nums[i];

        } 
    }

    return cnt;
}
////////////////////////////////////////////////////////////