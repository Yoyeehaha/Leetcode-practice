char* convert(char* s, int numRows) {
    if (numRows == 1) return s;
    int len = strlen(s), index = 0, temp;
    char* arr = (char*)malloc(len +1);

    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < len; j += 2 * (numRows - 1)) {
            arr[index++] = s[j];
            //for the situation that curent row is not the "first" or the "last"
            if ((i > 0 )&& (i < numRows - 1) && (j + 2 * (numRows - i - 1) < len)) {
                arr[index++] = s[j + 2 * (numRows - i - 1)];
            }
        }
    }
    arr[index] = '\0';
    return arr;
}