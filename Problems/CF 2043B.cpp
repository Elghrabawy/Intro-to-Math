#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, d; cin >> n >> d;

        set<int> st;
        
        cout << 1 << " ";

        if(d % 3 == 0 || n >= 3) 
            cout << 3 << " ";
        if(d == 5) {
            cout << 5 << " ";
        }
        if(n >= 3 || d == 7) {
            cout << 7 << " ";
        }
        if(d % 9 == 0 || n >= 6 || (d % 3 == 0 && n >= 3)) {
            cout << 9 << " ";
        }
    }
}
/* ------------------------------------------------------------------------- */