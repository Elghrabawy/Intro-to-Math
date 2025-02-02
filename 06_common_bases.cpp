#include <bits/stdc++.h>
using namespace std;


int main(){

/******** Writing numbers in different bases ********/

    // 1. binary : use (0b) as prefix notation
    int n1 = 0b1111; // 1 * 2^3 + 1 * 2^2 + 1 * 2^1 + 1 * 2^0 = 15
    cout << "binary (1111) : " << n1 << endl;


    // 2. octal : use (0) as prefix notation
    int n2 = 077; // 7 * 8^1 + 7 * 8^0 = 63
    cout << "octal (77) : " << n2 << endl;


    // 3. hexadecimal : use (0x) as prefix notation
    int n3 = 0x1F; // 1 * 16^1 + 15 * 16^0 = 31
    cout << "hexadecimal (1F) : " << n3 << endl;


    // 4. decimal : no prefix notation
    int n4 = 31;
    cout << "decimal (31) : " << n4 << endl;


/******** Printing numbers in different bases ********/

    // 1. binary : use (bitset<number of bits>(number)) to print binary representation

    int m1 = 15; // binary : 1111
    cout << "binary representation of (15) : " << bitset<4>(m1) << endl;


    // 2. octal : use (oct) to print octal representation
    int m2 = 63; // octal : 77
    cout << "octal representation of (63) : " << oct << m2 << endl;


    // 3. hexadecimal : use (hex) to print hexadecimal representation
    int m3 = 31; // hexadecimal : 1F
    cout << "hexadecimal representation of (31) : " << hex << m3 << endl;


    // 4. decimal : use (dec) to print decimal representation
    int m4 = 31;
    cout << "decimal representation of (31) : " << dec << m4 << endl;
}