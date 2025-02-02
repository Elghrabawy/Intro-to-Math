// fast power => get a^b : time complexity O(log(N))

long long power(long long a, long long b){
    long long result = 1;
    while(b){
        if(b % 2){
            result *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    return result;
}