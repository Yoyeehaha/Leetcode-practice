char* intToRoman(int num) {
    char* ans = malloc(sizeof(char)*16);
    int index = 0, temp;

    while(num > 0) {
        if(num / 1000 > 0) {
            ans[index++] = 'M';
            num -= 1000;
        } else if(num / 100 > 0) {

            if(num / 100 == 9) {
                ans[index++] = 'C';
                ans[index++] = 'M';
                num -= 900;
            } else if(num / 100 == 4){
                ans[index++] = 'C';
                ans[index++] = 'D';
                num -= 400;
            } else if(num >= 500) {
                ans[index++] = 'D';
                num -= 500;
            } else if(num >= 100) {
                ans[index++] = 'C';
                num -= 100;
            }

            
        } else if(num / 10 > 0){

            if(num / 10 == 9) {
                ans[index++] = 'X';
                ans[index++] = 'C';
                num -= 90;
            } else if(num / 10 == 4){
                ans[index++] = 'X';
                ans[index++] = 'L';
                num -= 40;
            } else if(num >= 50) {
                ans[index++] = 'L';
                num -= 50;
            } else if(num >= 10) {
                ans[index++] = 'X';
                num -= 10;
            }

        } else {

            if(num / 1 == 9) {
                ans[index++] = 'I';
                ans[index++] = 'X';
                num -= 9;
            } else if(num / 1 == 4){
                ans[index++] = 'I';
                ans[index++] = 'V';
                num -= 4;
            } else if(num >= 5) {
                ans[index++] = 'V';
                num -= 5;
            } else if(num >= 1) {
                ans[index++] = 'I';
                num -= 1;
            }

        }
    }
    ans[index] = '\0';
    return ans;
}