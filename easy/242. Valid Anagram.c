bool isAnagram(char* s, char* t) {
    int* check = calloc(26, sizeof(int));
    int curr = 0;

    if(strlen(s) != strlen(t))return false;

    while(s[curr] != '\0') {
        int index = s[curr++] - 'a';
        check[index]++;
    }
    curr = 0;

    while(t[curr] != '\0') {
        int index = t[curr++] - 'a';
        check[index]--;
        if(check[index] < 0) return false;
    }
    return true;
}