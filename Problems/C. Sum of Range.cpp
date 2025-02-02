#include <bits/stdc++.h>
using namespace std;

void Borhom(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

#define ll long long

ll sum(ll a1, ll an, ll n){
    return ((a1 + an) * n) / 2;
}

int main(){
    Borhom();

    ll a, b; cin >> a >> b;
    if(a > b) swap(a, b);

    ll total = sum(a, b, b - a + 1);

    ll ev_a = -1;
    if(a % 2 == 1) ev_a = a + 1;
    else ev_a = a;

    ll ev_b = -1;
    if(b % 2 == 1) ev_b = b - 1;
    else ev_b = b;


    ll even = sum(ev_a, ev_b, (ev_b - ev_a) / 2 + 1);

    ll odd = total - even; 

    cout << total << endl;
    cout << even << endl;
    cout << odd << endl;

}