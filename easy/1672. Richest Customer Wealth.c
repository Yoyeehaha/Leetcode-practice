int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0;
    int own_wealth;

    for(int i = 0;i < accountsSize;i++) {
        
        own_wealth = 0;
        for(int j = 0;j < accountsColSize[i];j++) {
            own_wealth += accounts[i][j];
        }
        if (own_wealth > max) max = own_wealth;
    }

    return max;
}