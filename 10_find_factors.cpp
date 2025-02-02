// find all divisors of number n
vector<int> factors(ll n){
    vector<int> v;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0) 
        {   
            v.push_back(i);
            if(i * i != n) v.push_back(n / i);
        }
    }
    return v;
}