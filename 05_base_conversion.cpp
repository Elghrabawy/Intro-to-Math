#include <bits/stdc++.h>
using namespace std;

// convert a digit with base b to decimal digit (Ex. 'F' -> 15)
int digit_to_int(char c){
    if(c >= '0' && c <= '9')
        return c - '0';
    return c - 'A' + 10;
}


// convert a number with base b to decimal
int convert_to_decimal_v1(string num, int base){
    int ans = 0;
    for(int i = 0; i < num.size(); i++){
        if(num[i] >= '0' && num[i] <= '9')
            ans = ans * base + digit_to_int(num[i]);
        else
            ans = ans * base + digit_to_int(num[i]);

    }
    return ans;
}

int convert_to_decimal_v2(string num, int base){
    reverse(num.begin(), num.end());

    int ans = 0, power = 1;
    for(int i = 0; i < num.size(); i++){
        ans += digit_to_int(num[i]) * power;
        power *= base;
    }

    return ans;
}


/* ----------------------------------------------------- */

// convert decimal to digit (Ex. 14 -> E)
char to_digit(int num){ 
    if(num >= 0 && num <= 9)
        return num + '0';
    return num - 10 + 'A';
}

  
string convert_to_base(int num, int base){
    string ans = "";
    while(num){
        ans += to_digit(num % base);
        num /= base;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}


int main(){
    string num = "1F";
    int base = 16; // hexadecimal number

    cout << "hexadecimal number : " << num << endl;
    cout << "to deciaml number  : " << convert_to_decimal_v1(num, base) << endl;
}