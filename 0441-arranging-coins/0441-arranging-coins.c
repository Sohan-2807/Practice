int arrangeCoins(int n) {
    int i = 1;
    
    while((long long)i*(i+1)/2 <= n){
        i++;
    }
    return i -1;
}