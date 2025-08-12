int divide(int dividend, int divisor) {
    
    bool min = 0;

    if (dividend==INT_MIN && divisor==-1) return INT_MAX;
    if (dividend==INT_MIN && divisor==1) return INT_MIN;

    int quo = 0;
    long long pos_dividend = llabs((long long) dividend);
    long long pos_divisor = llabs((long long) divisor);
    bool neg = 0;
    
    //double the divisor to fasten the process
    while (pos_dividend >= pos_divisor) {
        long long mul = pos_divisor, tmp_quo = 1;
        while (pos_dividend-mul >= mul) {
            mul += mul;
            tmp_quo += tmp_quo;
        }
        pos_dividend -= mul;
        quo += tmp_quo;
    }

    if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
        neg = 1;
    } 
    
    quo = neg ? quo * (-1) : quo;
    
    return quo;
}