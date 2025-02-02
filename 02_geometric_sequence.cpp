#include <bits/stdc++.h>
using namespace std;

// ? a1 : first term
// ? an : nth term
// ? r : common ratio
// ? n : number of terms

int sequence_sum(int a1, int r, int n){
    return ((1 - pow(r, n)) / (1 - r));
}

int kth_term(int a1, int r, int k){
    return a1 * pow(r, k - 1);
}

int number_terms(int a1, int an, int r){
    return log(an / a1) / log(r) + 1;    
}

int main(){

}