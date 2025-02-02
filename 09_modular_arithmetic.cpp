// (a + b) % n  -> modular summation
int modSum(int a, int b, int n){
    return ((a % n) + (b % n)) % n;
}


// (a * b) % n  -> modular multiplication
int modMul(int a, int b, int n){
    return ((a % n) * (b % n)) % n;
}


// (a - b) % n  -> modular subtraction
int modSub(int a, int b, int n){
    return ((a % n) - (b % n) + n) % n;
}


// negative or positive number mod m
int modNeg(int a, int m) {
    return (a % m + m) % m;
}


// mod inverse of (b % m)
int inverse(int b, int M) { // M must prime
    return modExp(b ,M - 2 ,M);
}

// (a / b) % n  -> modular division
int modDiv(int a, int b, int n){
    return ((a % n) * (inverse(b) % n)) % n;
}