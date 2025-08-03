#include <stdio.h>
#include <limits.h>
#include <ctype.h>

int myAtoi(char* s) {
    int length = strlen(s);
    int neg = 0, sum = 0, temp;
    bool afterDigit = false, afterSign = false;

    for(int i = 0; i < length; i++) {
        if(s[i] <= '9' && s[i] >= '0') {
            temp = (s[i] - 48); //ascii code 0-9 => 48-57
            if(sum > (INT_MAX - temp) / 10) {
                return neg == 0 ? INT_MAX : INT_MIN;
            }
            sum = sum * 10 + temp;
            afterDigit = true;
        } else if(sum == 0 && s[i] == '-' && (!afterDigit) && (!afterSign)){
            neg = 1;
            afterSign = true;
        } else if(sum == 0 && s[i] == '+' && (!afterDigit) && (!afterSign)){
            neg = 0;
            afterSign = true;
        } else if(s[i] == ' ' && (!afterDigit) && (!afterSign)) {
            //do nothing
        } else {
            break;
        }

    }
    if(neg == 1) sum = sum *(-1);

    return sum;
}