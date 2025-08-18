int numJewelsInStones(char* jewels, char* stones) {
    bool check[52] = {false};
    int index, ans = 0;

    while(*jewels != '\0'){
        if(*jewels >= 'A' && *jewels <= 'Z') {
            index = *jewels - 'A';
        } else {
            index = *jewels - 'a';
            index += 26;
        }
        check[index] = true;
        jewels++;
    }

    while(*stones != '\0'){
        if(*stones >= 'A' && *stones <= 'Z') {
            index = *stones - 'A';
        } else {
            index = *stones - 'a';
            index += 26;
        }
        if(check[index])ans++;
        stones++;
    }
    return ans;
}