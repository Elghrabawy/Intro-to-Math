#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-9;

bool isEqual(double a, double b) {
    return fabs(a - b) < EPS;
}
bool isGreater(double a, double b) {
    return a > b + EPS;
}
bool isLess(double a, double b) {
    return a < b - EPS;
}

int main(){
}