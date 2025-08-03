bool isPalindrome(int x) {

    int reverse = 0, temp, origin = x;
    while (x  > 0) {
        temp = x % 10;
        x /= 10;
        reverse = reverse * 10 + temp;
    }

    if(reverse == origin) return true;
    else return false;

}