bool canConstruct(char* ransomNote, char* magazine) {
    int* arr = calloc(26, sizeof(int));
    for(;*magazine;) {
        int index = *magazine - 'a';
        arr[index] += 1;
        magazine++;
    }

    for(;*ransomNote;) {
        int index = *ransomNote - 'a';
        arr[index] -= 1;
        if(arr[index] < 0) return false;
        ransomNote++;
    }
    return true;
}