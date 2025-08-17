#include <ctype.h>

bool isPalindrome(char* s) {
    int left = 0, right = strlen(s) - 1;
    if(right == left) return true;

    while(left < right) {
        
        while(((tolower(s[left]) < 'a') && (s[left] > '9')) \
         || (tolower(s[left]) > 'z') || (s[left] < '0')) {
            left++;
            if(left > right) return true;
        }
        while(((tolower(s[right]) < 'a') && (s[right] > '9')) \
        || (tolower(s[right]) > 'z') || (s[right] < '0')) {
            right--;
            if(left > right) return true;
        }
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        left++;
        right--;
                
    }

    return true;
}