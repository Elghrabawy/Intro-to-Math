# Introduction

### C++ Operators

> **Arithmetic Operators**
> - used to perform common mathematical operations
> Like :`(+) (-)  (*) (/) (%) (++) (--)`


> **Assignment Operators**
> - used to assign values to variables
> Like : `(=) (+=) (-=)`

> **Comparison operators**
> - used to compare two values (or variables).
> - return `1` or `0`
> like : `(==) (!=) (>) (<) (>=) (<=)`

> **Logical operators**
> - used to determine the logic between variables or values (bool values)
> like : `(&&) (||) (!)`

> **Bitwise operators**
> - used to perform bit-level operations on the integers.
> like : `(&) (|) (^) (~) (<<) (>>)`

## Some math symbols

| Symbol              | Meaning                                   | Example                                |
| ------------------- | ----------------------------------------- | -------------------------------------- |
| $\sum$              | Summation                                 | $\sum_{i=1}^{n} i = \frac{n(n+1)}{2}​$ |
| $\prod$             | Product                                   | $\prod_{i=1}^{n} i = n!$               |
| $a$ \| $b$          | $a$ divides $b$                           | $3$ \| $6$ (true)                      |
| $\lfloor x \rfloor$ | Floor function (Greatest integer $\le x$) | $\lfloor 3.7 \rfloor = 3$              |
| $\lceil x \rceil$   | Ceil Function (Smallest integer $\ge x$)  | $\lceil 3.2 \rceil = 4$                |
1. $\sum_{i=1}^{n} i = \frac{n(n+1)}{2}​$
2. $\sum_{i=0}^{n} 2^i = 2^{(n + 1)} - 1​$

**read this : [cheat sheet](https://www.tug.org/texshowcase/cheat.pdf)**

# Arithmetic Sequence

> **Arithmetic Sequence**
> - sequence of numbers where the difference between consecutive terms is constant called common difference $(d)$

### General Form
- $a, a + d, a + 2d, a + 3d, ... , a + (n - 1)d$
  where : 
	- $a$ : the first term
	- $d$: the common difference 
	- $n$: the number of terms
### Examples
- $1, 2, 3, 4, 5$ $(a = 1, d = 1)$
- $10, 7, 4, 1$ $(a = 10, d = -3)$
### Key Formulas
1. Sum of n Terms
	$S_n = (a_1 + a_n) * n / 2$
2. nth Term Formula
	$a_n = a_1 + (n - 1)d$
3. number of terms (n)
	$n = \frac{(an - a1)}{d} + 1$
### Code
```cpp
int sequence_sum(int a1, int an, int n){

    return ((a1 + an) * n) / 2;

}
```
```cpp
int nth_term(int a1, int d, int n){

    return a1 + (n - 1) * d;

}
```
### Problems
1. What is the sum of the numbers between 3 and 20 inclusive? // with formula
2. What is the sum of this sequence $(4, 10, 16, 22, 28, 34, 40)$? // with formula
3. [CF 598A](https://codeforces.com/problemset/problem/598/A)
4. [C. Sum of Range](https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C)
### references
[1. khanacademy](https://www.khanacademy.org/math/algebra/x2f8bb11595b61c86:sequences/x2f8bb11595b61c86:introduction-to-arithmetic-sequences/a/introduction-to-arithmetic-sequences#:~:text=In%20an%20arithmetic%20sequence%2C%20the,consecutive%20terms%20is%20always%20two.)
# Geometric Sequence

> **Geometric Sequence**
> - sequence of numbers where each term is multiplying of the previous term by a constant value called common ration $(r)$

### Examples
- $2, 4, 8, 16, 32$ $(r = 2)$
- $81, 27, 9, 3, 1$ $r = 1/3$
### General Form
- $a, ar, ar^2, ar^3, ... , ar^{n-1}$
  where : 
	- $a$ : the first term
	- $r$: the common ratio 
	- $n$: the number of terms

### Key Formulas
1. Sum of first n Terms
	$S_n = a_1 \cdot \frac{1 - r^n}{1 - r}$
2. nth Term Formula
	$a_n = a_1 \cdot r^{n - 1}$
3. number of terms (n)
	$n = log_{r}{(\frac{a_n}{a_1})} + 1$
	
### problems
4. what is the sum of this geometric series: {1 3 9 27 81 243 729} ? (using formula)

### Code
```cpp
int sequence_sum(int a1, int r, int n){

    return ((1 - pow(r, n)) / (1 - r));

}
```

```cpp
int nth_term(int a1, int r, int n){

    return a1 * pow(r, n - 1);

}
```
# C++ Math Functions


 ```cpp
sqrt(x);     // square root value of x
cbrt(x);     // cube root value of x
```

```cpp
abs(x);      // absolute value of x
fabs(x);     // absolute value for floating-point types
```

```cpp
min(x, y);   // the minimum value between (x and y)
max(x, y);   // the maximum value between (x and y)

// min and max functions get initialize list.
min({x, y}); 
max({x, y});
```

```cpp
pow(n, p);   // n^p
```

```cpp
ceil(x);     // round up
floor(x);    // round down
round(x);    // nearest integer to x [halfway cases away from 0]
```

```cpp
__gcd(a, b); // greatest common divisor of (a and b)
lcm(a, b);   // lowest common multiple of (a and b)
```

```cpp
log(x);      // natural log (base e)
log10(x);    // log base 10
exp(x);      // e^x
```

```cpp
// x in radians
sin(x);
cos(x);     
tan(x);

// degree-based angles : must convert to radians
double toRadians(double degree){
	return (degree * PI) / 180.0;
}
```
# Rounding

> **Rounding Functions**
>
>return value : **double**
> ```cpp
> ceil(x);   // round up
> floor(x);  // round down
> round(x);  // nearest integer to x [halfway cases away from 0] 
> ```


### Examples

| <center>value | <center>round | <center>floor | <center> ceil </center> |
| ------------- | ------------- | ------------- | ----------------------- |
| <center>2.3   | <center>2.0   | <center>2.0   | <center>3.0             |
| <center>3.8   | <center>4.0   | <center>3.0   | <center>4.0             |
| <center>5.5   | <center>6.0   | <center>5.0   | <center>6.0             |
| <center>-2.3  | <center>-2.0  | <center>-3.0  | <center>-2.0            |
| <center>-3.8  | <center>-4.0  | <center>-4.0  | <center>-3.0            |

### In Integers
- $\lfloor a/b \rfloor = a / b$
	```cpp
	int floor(a, b){
	    return a / b;	
	}
	```

- $\lceil a/b \rceil = (a + b - 1) / b$
	```cpp
	int ceil(int a, int b){
	    return (a + b - 1) / b;
	}
	```
	```cpp
	int ceil(int a, int b){
	    int ret = a / b;
	    if(a % b != 0) ret++;
	    return ret;
	}
	```
-  $round(a/b) = (x + \frac{y}{2}) / y$
	```cpp
	int round(int a, int b){
	    return (x + y/2) / y;
	}
	```

## Problems
- Find the floor, round and ceil for this numbers
	1. $4/7$
	2. $20/5$
	3. $9/4$
	4. $9/2$
# Double Handing & EPS

> **What the output of this code? and Why?**
> ```cpp
> double a = 9.1 * (1 / 9.1);
> double b = 1;
> cout << a << endl; 
> cout << b << endl;
> cout << (a == b ? "is equal" : "is not equal") << endl;

## EPSILON

> **EPSILON**
>
> >**Epsilon** (ϵ) is a very small positive number used to compare floating-point numbers. Instead of checking if two floating-point numbers are exactly equal, we check if their difference is less than ϵ.

### Compare doubles using EPS value
```cpp
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
```

- Example
```cpp
double a = 9.1 * (1 / 9.1);
double b = 1;

cout << (a == b ? "is equal" : "is not equal") << endl;         // output : "is not equal"
cout << (isEqual(a, b) ? "is equal" : "is not equal") << endl;  // output : "is equal"
```

**Avoid using `double` if you have the opportunity to work with integers. This helps maintain precision, improves performance, and prevents unexpected rounding errors.**
### Multiple version of floating-point functions

> **General Rule**
>
> If a function has version for `float` and `long double`, they generally follow this pattern:
> - `func(double)` : Default version (works with `double`)
> - `funcf(float)` : For `float`
> - `funcl(long double)` : For `long double`

- Examples

| double      | long double ($∀x \ge 10^{12}$) | description                               |
| ----------- | ------------------------------ | ----------------------------------------- |
| `sqrt(x)`   | `sqrtl(x)`                     | square root                               |
| `pow(n, p)` | `powl(n, p)`                   | power                                     |
| `log(x)`    | `logl(x)`                      | Logarithm (Natural Log)                   |
| `sin(x)`    | `sinl(x)`                      | Trigonometric (Sin)                       |
| `fabs(x)`   | `fabsl(x)`                     | Absolute value for floating-point numbers |

$log_{b}{(n)} = log{(n)} / log{(b)}$

# Quadratic Formula

> [!Quadratic Formula]
> if $ax^2 + bx + c = 0$ and $(a \neq 0)$
> $$
> x = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}
> $$
> 1. $b^2 - 4ac > 0 \text{ : two real solution}$
> 2. $b^2 - 4ac = 0 \text{ : one real solution}$
> 3. $b^2 - 4ac < 0 \text{ : zero real solution}$
>

## problems
- [CF 1862D](https://codeforces.com/contest/1862/problem/D) (solve using quadratic formula)
- [E. Maximum Distinct Numbers](https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/E) (Solve using quadratic formula)
# Divisibility Rules

> **Divisibility Rules**
> rules that determine whether a number is divisible by another without performing full division
> **read and save this : ** [wikipedia - Divisibility rule](https://en.wikipedia.org/wiki/Divisibility_rule)

#### Example of Divisibility rules of numbers from 2 to 9
| number | divisibility rule                                                                                                                  | Eaxmple                                                 |
| ------ | ---------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------- |
| 2      | last digit is even.                                                                                                                | `342` : last digit 2, it is even.                       |
| 3      | the sum of its digits is divisible by 3.                                                                                           | `912` : the sum of digits is `12`, that divisible by 3. |
| 4      | the last two digits from a number divisible by 4.                                                                                  | `12316` : last two digits `16`, that divisible by 4.    |
| 5      | last digit 0 or 5.                                                                                                                 | `3245` : last digit is 5.                               |
| 6      | divisible by 2 and 3.                                                                                                              | `912` : divisible by 2 and 3.                           |
| 7      | double the last digit and subtract it from the rest of the number; <br>if the result is divisible by 7, so is the original number. | `259` -> `25 - 9*2` = 7 (7 divisible by 7).             |
| 8      | last three digits divisible by 8.                                                                                                  | `3424128` : last 3 digits `128`, divisible by 8.        |
| 9      | sum of its digits divisible by 9.                                                                                                  | `4149` : sum of digits is `18`, divisible by 9.         |

## Problems
- [CF 2043B](https://codeforces.com/contest/2043/problem/B)

# Logarithms & Power


> **Power**
> Raising a number to a power
> $$
> a^b = a \times a \times a ... (b \text{ times})
> $$


> **Logarithm**
> It is the Inverse operation to exponentiation (how many b multiplications to equal x)
> $$
> Log_b(x) = y \text{ means } b^y = x
> $$
> examples:
> 1. $log_{10}{100} =$ how many 10 multiplications = 1000? 3
> 2. $log_{2}{16} =$ how many 2 multiplications = 16? 4 

### Logarithm Operations

| Operation | Formula                                          |
| --------- | ------------------------------------------------ |
| product   | $log_{b}{(xy)} = log_{b}{(x)} + log_{b}{(y)}$    |
| quotient  | $log_{b}{(x / y)} = log_{b}{(x)} - log_{b}{(y)}$ |
| power     | $log_{b}{(x^p)} = p \times  log_{b}{(x)}$        |
| root      | $log_{b}{\sqrt[p]{x}} = log_{b}{(x)} / p$        |


### Logarithm and number of digits


> [!number of digits]
> Digits = $1 + \lfloor log_{10}{(x)} \rfloor$
> 

- examples
	1. $log_{10}{(1000)} = 3 => 1 + 3 = 4 \text{ digits}$
	2. $log_{10}{(1430)} = 3.15 => 1 + 3 = 4 \text{ digits}$
	3. $log_{10}{(9999)} = 3.99 => 1 + 3 = 4 \text{ digits}$
	4. $log_{10}{(12345)} = 4.09 => 1 + 4 = 5 \text{ digits}$
	
### Problems
- check overflow after multiply
- [Problem - 1175B - Codeforces](https://codeforces.com/problemset/problem/1175/B)

# Number Bases

| Decimal | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8    | 9    | 10   | 11   | 12   | 13   | 14   | 15   |
| ------- | --- | --- | --- | --- | --- | --- | --- | --- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| Binary  | 0   | 1   | 10  | 11  | 100 | 101 | 110 | 111 | 1000 | 1001 | 1010 | 1011 | 1100 | 1101 | 1110 | 1111 |
| Octal   | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 10   | 11   | 12   | 13   | 14   | 15   | 16   | 17   |
| Hexa    | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8    | 9    | A    | B    | C    | D    | E    | F    |

## Convert $X$ in base $A$ to base $B$

> [!Convert $X$ in base $a$ to base $b$] Convert $X$ in base $a$ to base $b$
> convert $X$ from base $A$ to base $10$, then from base $10$ or decimal to base $B$

### 1. Convert $X$ in base $A$ to base $10$

> **Convert base b to 10** 
> - from right to left multiply $digit$ by $base^{\text{(number of this digit)}}$
> $$
> \sum_{i=0}^{length - 1} b^i \times digit[i]​
> $$

#### Examples
5. $\text{2EF3}_{(16)} = 3 \times 16^0 + 15 \times 16^1 + 14 * 16^2 + 2 \times 16 ^ 3 = 12019$
6. $\text{1034}_{(8)} = 4 \times 8^0 + 3 \times 8^1 + 0 \times 8^2 + 1 \times 8 ^3 = 540$

### 2. Convert $X$ in base $10$ to base $B$

> **Convert base 10 to b** 
> - divide the decimal number ($X$) by the base ($b$), and write down the reminder, then read reminder in reverse order

### Examples 
7. $12019_{(10)}\text{ to base } 16$

	```
	
	| x     | x / 16 | reminder |
	+-------+--------+----------+
	| 12019 | 751    | 3        |
	| 751   | 46     | 15 = F   |
	| 46    | 2      | 14 = E   |
	| 2     | 0      | 2        |
	
	```
	- Result : $\text{2EF3}$

### Codes
- Convert from base to decimal
```cpp
int digit_to_int(char c){
    if(c >= '0' && c <= '9')
        return c - '0';
    return c - 'A' + 10;
}


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
```

- Convert from decimal to base
```cpp
char to_digit(int num){ // convert decimal to digit (ex. 14 -> E)
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
```

### Problems
- [N. Convert to Base](https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/N)

## Writing numbers in different bases

> you can specify numbers in different bases using prefix notation :
> * **Binary:** Use `0b`.
> * **Octal:** Use `0`.
> * **Decimal:** Normal integer notation. 
> * **Hexadecimal:** Use `0x`.

```cpp
    // 1. binary : use (0b) as prefix notation
    int n1 = 0b1111;
    cout << "binary (1111) : " << n1 << endl; // output : 15

    // 2. octal : use (0) as prefix notation
    int n2 = 077;
    cout << "octal (77) : " << n2 << endl; // output : 63

    // 3. hexadecimal : use (0x) as prefix notation
    int n3 = 0x1F;
    cout << "hexadecimal (1F) : " << n3 << endl; // output : 31

    // 4. decimal : no prefix notation
    int n4 = 31;
    cout << "decimal (31) : " << n4 << endl; // output : 31
```
## Print numbers in different bases

> * `dec` : Decimal
> * `oct` : Octal
> * `hex` : Hexadecimal
> * `bitset` : Binary

```cpp
int num = 29;

cout << "Decimal: " << dec << num << endl; // output : 29
cout << "Octal: " << oct << num << endl;   // output : 35
cout << "Hexadecimal: " << hex << uppercase << num << endl; // output : 1D
cout << "Binary: " << bitset<8>(num) << endl; // output : 00011101
```

## Summary : 
| Base        | Writing Format | Printing Manipulator |
| ----------- | -------------- | -------------------- |
| Binay       | `0b1101`       | `bitset<N>(num)`     |
| Octal       | `075`          | `oct`                |
| Decimal     | `123`          | `dec`                |
| Hexadecimal | `0x1F`         | `hex`                |


## Last digit 

### Remove last digit
> - to remove last digits just divide ($N$ number with base $b$) by ($b$) 
> $$\text{remove last digit of }N_{(b)}= (N / b)$$
> Examples : 
> 1. $34F_{(16)}$ remove last digit in this hexadecimal number
> 	- $34F_{(16)} / 16 = 34_{(16)}$
> 2. $100101_{(2)}$ remove last bit in this binary number 
> 	- $100101_{(2)} / 2 = 10010_{(2)}$
> 3. $21345_{(10)}$ remove last digit in this decimal number
> 	- $21345_{(10)} / 10 = 2134_{(10)}$

#### Code
```cpp
int a = 34; // a = 0b(100010)
a = a / 2;  // remove last bit

cout << a << endl; // output : 17 = 0b(10001)
```
```cpp
int a = 4234; // a = 0x(108A)
a = a / 16; // remove last hexadecimal digit

cout << a << endl; // output : 246 = 0x(108)
```

### Get last digit
> $$\text{ last digit of } N_{(b)} = (N \text{ \% } b)$$
> Examples : 
> 1. $34F_{(16)}$ find the last digit in this hexadecimal number
>		- $34F_{(16)} \text{ \% } 16 = F_{(16)}$
> 2. $100101_{(2)}$ find the last bit in this binary number 
> 		- $100101_{(2)} \text{ \% } 2 = 1_{(2)}$
> 3. $21345_{(10)}$ find the last digit in this decimal number
> 		- $21345_{(10)} \text{ \% } 10 = 5_{(10)}$

#### Code 
```cpp
int a = 4234; // a = 0x(108A)
int last_digit = a % 16; // get last hexadecimal digit

cout << last_digit << endl; // output : 10 = 0x(A)
```
### Count number of digits

> **Count digits in number $N$ with base $b$**
> - still remove last digit until the $N = 0$
> - the number of digits = $\lfloor log_{b}{(N)} \rfloor + 1$
> 
> Ex. 
> 1. $21345_{(10)}$ count the number of digits and $\lfloor log_{10}{(21345)} \rfloor$
> 	1. `21345 / 10 => 2134`
> 	2. `2134 / 10 => 213`
> 	3. `213 / 10 => 21`
> 	4. `21 / 10 => 1`
> 	5. `1 / 10 => 0`
> - number of digits  = $5$
> - $\lfloor log_{10}{(21345)} \rfloor = 5 - 1 = 4$

#### Code
```cpp
int count_digits(int n, int base){
	int ans = 0;
	while(n){
		n /= base;	
		ans++;
	}
	return ans;
}
```


# Bitwise Operations

> are the operators that are used to perform bit-level operations on the integers.
> 1. **AND (&)** : result is 1 only if both bits are 1.
> 2. **OR (|)** : result is 1 if any of the two bits is 1.
> 3. **XOR (^)** : result is 1 if the two bits are different.
> 4. **right shift (>>)** : move the bits to the right or divide number by 2.
> 5. **left shift (<<)** : push the bits to the left or multiplying the number by 2.
> 6. **NOT (~)** : flipping all bits, 1s to 0s and 0s to 1s.


| Operator    | Symbol | Example (Decimal) | Example (Binary)    |
| ----------- | ------ | ----------------- | ------------------- |
| AND         | `&`    | `5 & 3 = 1`       | `101 AND 011 = 001` |
| OR          | `\|`   | `5 \| 3 = 7`      | `101 OR 011 = 111`  |
| XOR         | `^`    | `5 ^ 3 = 6`       | `101 XOR 011 = 110` |
| NOT         | `~`    | `~5 = 2`          | `NOT 101 = 010`     |
| Left Shift  | `<<`   | `5 << 1 = 10`     | `101 << 1 = 1010`   |
| Right Shift | `>>`   | `5 >> 1 = 2`      | `101 >> 1 = 10`     |

- to write integers with binary representation 
```cpp
int x = 0b1011;
cout << x << endl; // output : 5
```

- to write integers with hexadecimal representation
```cpp
int x = 0xff
cout << x << endl; // output ; 255
```


### Example
```cpp
int a = 0b101; // a = 5
int b = 0b011; // b = 3
cout << (a & b) << endl; // output : 1
cout << (a | b) << endl; // output : 7
cout << (a ^ b) << endl; // output : 6
cout << (~a) << endl;    // output : 2
```

### Difference between logical and bitwise operators?

# Modular Arithmetic

> - **Modular operator (`%`)**
>* if we say $A$ $mod$ $B = R$
>* R is the smallest non negative number such that $A - R$ is multiple of $B$
>* it also mean $(A = Q * B + R)$  ($Q$ is any number)
>- $(A / B) = Q$ reminder $R$
>
>	```cpp
> 	17 % 4 = 1
> 	17 - 1 is divisble by 4
> 	-> 17 / 4 = 4 remider 1
>	```


## Examples
```cpp
1) A > B :
    Ex. 19 % 4 = 3
2) A < B // A % B = A
    Ex. 4 % 6 = 4
3) A = B
    Ex. 8 % 8 = 0
4) A = 0
    Ex. 0 % 3 = 0
5) B = 0 // Runtime Error
```
## Practice Problems
1. what is the result?
```cpp
1) 8 % 2
2) 9 % 20
3) 0 % 12
4) 7 % 3
5) 19 % 0
```
2. [CF 1828A](https://codeforces.com/problemset/problem/1828/A) (basic)
3. shifting the array elements
4. [189. Rotate Array](https://leetcode.com/problems/rotate-array)


## Cyclic Behavior

> the result of any number (mod x) is between 0 to x - 1
> Example : 
> ```
> take %5 of all element in the list.
> list   : 0 1 2 3 4 5 6 7 8 9 
> mod 5  : 0 1 2 3 4 0 1 2 3 4
> ```


## Modular operations

> **Modular Summation**
> $$
> (a + b) \text{ mod } m = ((a \text{ mod } m) + (b \text{ mod } m)) \text{ mod } m
> $$


> **Modular multiplication**
> $$
> (a * b) \text{ mod } m = ((a \text{ mod } m) * (b \text{ mod } m)) \text{ mod } m
> $$
#### mod of negative numbers
- add $m$ to the result after take $(\text{mod } m)$
- Ex. $(-20)\text{ \% } 3 = -2$ $(\text{add } 3) = 1$

> **Modular substraction**
> $$
> (a - b) \text{ mod } m = ((a \text{ mod } m) - (b \text{ mod } m) + m) \text{ mod } m
> $$
# Factorization

> **What the Factor**
> **a | b** : means that a divides b or a is factor of b
>**Factor or divisor** : is positive integer that is divisible by another number
>
> 

## Find Factors
### 1. Traditional way

- Steps
> 1. loop on all numbers from 1 to n
> 2. if number divisible by n then, this number is divisor of n

- Time complexity : $O(n)$
#### code
```cpp
// find factors of number n
for(int i = 1; i <= n; i++){
	if(n % i == 0) {
		cout << i << endl;
	}
}
```

### 2. More tricky way

the number after sqrt will be repeated 
for example :
```
divisors of 30 
  - 1 divides 30   then   (30 / 1)  30 divides 30
  - 2 divides 30   then   (30 / 2)  15 divides 30
  - 3 divides 30   then   (30 / 3)  10 divides 30
  - 5 divides 30   then   (30 / 5)   6 divides 30
  - 6 divides 30   then   (30 / 6)   5 divides 30
  - 10 divides 30  then   (30 / 10)  3 divides 30
  - 15 divides 30  then   (30 / 15)  2 divides 30
  - 30 divides 30  then   (30 / 30)  1 divides 30
```

> **Find divisors with optimal way**
> 1. loop on numbers from 1 to sqrt(n)
> 2. if number i divisible by n then, the number (i and n / i) divisible by n

> Time complexity : $O(\sqrt{n})$
#### code
```cpp
for(int i = 1; i * i <= n; i++){
	if(n % i == 0){
		cout << i << endl;
		if(i * i != n) {
			cout << n / i << endl;
		}
	}
}
```

# Primes

> **What the Prime** \
> is positive integer n with only two factors (1, n)

- **Examples**

| <center>number | <center>Is Prime? | <center>Factors      |
| -------------- | ----------------- | -------------------- |
| <center>2      | <center>prime     | <center>{1, 2}       |
| <center>3      | <center>prime     | <center>{1, 3}       |
| <center>4      | <center>not prime | <center>{1, 2, 4}    |
| <center>5      | <center>prime     | <center>{1, 5}       |
| <center>6      | <center>not prime | <center>{1, 2, 3, 6} |


### Check is prime or not

> **Check prime or not?**\
> find all factors like the away above, if only two factor then is prime.
> 1. loop on numbers from 2 to sqrt(n)
> 2. if any number i divisible by n then, the number is composite (not prime)

#### code
```cpp
bool isPrime = true;

if(n == 1) isPrime = false;

for(int i = 2; i * i <= n; i++){
	if(n % i == 0){
		isPrime = false;
		break;
	}
}
```

# Prime Factorization

> **What the Prime Factors**\
> are the prime numbers that multiply together to give a specific number

**Note : any number is result of multiply some prime factors**

Ex. Find prime factors of number 18 
```cpp
                    18
                2   X   9
            2   X   3   X   3
            
Prime factors of 18 is {2, 3, 3}
```

## Practice
- What are the prime factors of this numbers
	1. 9
	2. 18
	3. 20
	4. 3
	5. 14
	6. 13

## Implementation
- The same thing in factorization and prime checking, we can iterate only to sqrt(n).

> **Find prime factors** 
> 1. iterate from 2 to sqrt(n) 
> 2. if number i divisible by n then divide n by i
> **(if n not prime then in the end loop n = 1, otherwise n still the same value)**

Ex. Find prime factors of 36
```
n = 36
n = 36 / 2 = 18 : prime factors { 2 }
n = 18 / 2 = 9  : prime factors { 2 , 2 }
n = 9 / 3 = 3   : prime factors { 2 , 2 , 3 }
n = 3 / 3 = 1   : prime factors { 2 , 2 , 3 , 3} 
```

#### Code
```cpp
for(int i = 2; i * i <= n; i++){
	while(n % i == 0) {
		cout << i << endl; // i is prime factor of n
		n /= i;
	}
	// if n is a prime number
	if(n != 1) cout << n << endl;
}
```

## Problems
- [J. Prime Factors](https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/J)
# GCD

> **What Greatest Common Divisor**
> - the largest number that divides both a and b.
> - product of lower power of all prime factors in a and b.

Ex. `GCD(15, 20)`
- Factors of 15 : {1, 3, **5**, 15}
- Factors of 20 : {1, 2, 4, **5**, 10, 20}
- the $gcd(15, 20)$ is **5**.

## GCD in C++
```cpp
int a = 15;
int b = 20;

cout << __gcd(a, b) << endl; // output : 5
```

> **Coprimes**\
> $x$ and $y$ are two positive integers are called coprime if $gcd(x, y) = 1$
> Ex: (20, 21)

## Problems
1. Find result of
	1. gcd(0, 8)
	2. gcd(3, 7)
	3. gcd(9, 3)
2. [CF 822A](https://codeforces.com/problemset/problem/822/A)
# LCM

> **What lowest common multiple**
> - smallest positive integers that is divisible by both a and b.
> - product of higher powers of all prime factors in a and b.
>$$
> lcm(a, b) = \frac{a \times b}{gcd(a, b)}
>$$



Ex. `LCM(15, 20)`
- Multiples of 15 : {15, 30, 45, **60**, 75, .. etc}
- Multiple of 20 : {20, 40, **60**, 80, .. etc}
- the $lcm(15, 20)$ is **60**.

## LCM in C++
```cpp
int lcm(int a, int b){
	return (a * b) / __gcd(a, b);
}
```
```cpp
cout << lcm(15, 20) << endl; // output : 60
```

## Practice
1. Find result of 
	1. lcm(15, 20)
	2. lcm(13, 26)
	3. lcm(2, 3)