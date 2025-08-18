char* toLowerCase(char* s) {
    char* ans = (char*)calloc(strlen(s) + 1, sizeof(char));
    int index = 0;
    while(s[index] != '\0'){
        if(s[index] >= 'A' && s[index] <= 'Z') {
            ans[index] = s[index] + 32;
        } else {
            ans[index] = s[index];
        }
        index++;
    }
    return ans;
}