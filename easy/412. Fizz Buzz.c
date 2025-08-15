/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize) {
    bool fizz = false, buzz = false;
    char** answer = malloc(n * sizeof(char*));
    *returnSize = n;

    for(int i = 0;i < n;i++) {
        if((i + 1) % 3 == 0) fizz = true;
        if((i + 1) % 5 == 0) buzz = true;

        if(fizz && buzz) {
            answer[i] = "FizzBuzz";
        } else if(fizz && !buzz) {
            answer[i] = "Fizz";
        } else if(!fizz && buzz) {
            answer[i] = "Buzz";
        } else {
            char buf[12];
            sprintf(buf, "%d", i + 1);
            answer[i] = malloc(strlen(buf) + 1);
            strcpy(answer[i], buf);
        }

        fizz = false;
        buzz = false;
    }

    return answer;
}