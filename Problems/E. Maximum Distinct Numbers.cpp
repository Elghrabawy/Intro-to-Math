// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

void Borhom(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}


double EPS = 1e-9; // 0.000000001

bool isEqual(double a, double b){
    if(fabs(a - b) < EPS){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    Borhom();

    long double n; cin >> n;

    long double x = (-1 + sqrt(1 + 8 * n)) / (2);

    cout << (long long)x << endl;
}