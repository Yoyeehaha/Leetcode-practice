int hammingWeight(int n) {
    
    int num, cnt = 0;
    while (n > 1) {
        num = n % 2;
        if (num == 1) cnt++;
        n /= 2; 
    }

    return cnt + 1;
}