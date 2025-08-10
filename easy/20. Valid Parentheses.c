bool isValid(char* s) {
    int len = strlen(s);
    char stack[100000];
    int top = -1;

    for (int i = 0;i < len;i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i]; //push
        } else {
            if (top < 0) return false; //for the situation that no left
            if ((stack[top] == '(' && s[i] == ')') || (stack[top] == '[' && s[i] == ']') || (stack[top] == '{' && s[i] == '}')) {
                top--;  //pop
            } else {
                return false;
            }
        }
    }

    if (top >= 0) return false; //ensure that the stack is empty
    return true;
}