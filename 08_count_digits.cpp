int count_digits(int a, int b = 10){
    int cnt = 0;
    while(a){
        a /= b;
        cnt++;
    }
    return cnt;
}