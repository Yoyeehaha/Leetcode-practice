void sortColors(int* nums, int numsSize) {
    int zero = 0, one = 0, two = 0;

    for(int i = 0;i < numsSize;i++) {
        if(nums[i] == 0) {
            zero++;
        } else if (nums[i] == 1) {
            one++;
        } else {
            two++;
        }
    }

    for(int i = 0;i < numsSize;i++) {
        if(zero > 0) {
            zero--;
            nums[i] = 0;
        } else if (one > 0) {
            one--;
            nums[i] = 1;
        } else {
            nums[i] = 2;
        }
    }
}