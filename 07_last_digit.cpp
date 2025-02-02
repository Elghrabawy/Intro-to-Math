#include <bits/stdc++.h>
using namespace std;


int remove_last_digit(int a, int b){
    return (a / b);
}

int last_digit(int a, int b){
    return (a % b);
}


int main(){
    int a = 12345;

    cout << "after remove last digit : " << remove_last_digit(a, 10) << endl;
    cout << "last digit of ( " << a << " ) : " << last_digit(a, 10) << endl;
    cout << "number of decimal digits of ( " << a << " ) : " << count_digits(a, 10) << endl;


    int b = 0x23F;
    cout << "last hexadecimal digit of ( " << hex << b << " ) : " << last_digit(b, 16) << endl;
    cout << "number of hexadecimal digits in ( " << hex << b << " ) : " << count_digits(b, 16) << endl;
}