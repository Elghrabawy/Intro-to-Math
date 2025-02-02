#include <bits/stdc++.h>
using namespace std;

// ? a1 : first term
// ? an : nth term
// ? d : common difference
// ? n : number of terms

int sequence_sum(int a1, int an, int n){
    return ((a1 + an) * n) / 2;
}

int kth_term(int a1, int d, int k){
    return a1 + (k - 1) * d;
}

int number_terms(int a1, int an, int d){
    return (an - a1) / d + 1;
}

int main(){

}