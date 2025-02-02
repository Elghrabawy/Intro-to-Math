// (a + b) % n  -> modular summation
ll modSum(ll a, ll b, ll n){
    return ((a % n) + (b % n)) % n;
}
// (a * b) % n  -> modular multiplication
ll modMul(ll a, ll b, ll n){
    return ((a % n) * (b % n)) % n;
}
// (a - b) % n  -> modular subtraction
ll modSub(ll a, ll b, ll n){
    return ((a % n) - (b % n) + n) % n;
}
// negative or positive number mod m
ll modNeg(ll a, ll m) {
    return (a % m + m) % m;
}

const int M = 1e9 + 7;
ll inverse(ll b, ll M) { 
    return modExp(b ,M - 2 ,M);
}

// (a / b) % n  -> modular division
ll modDiv(ll a, ll b, ll n){
    return ((a%n) * (inverse(b) % n)) % n;
}
// (a ^ b) % n  -> modular Exponintion
ll modExp(ll a, ll b, ll mod) {
    if (b <= 0) return 1;
    ll ret = modExp(a * a % mod, b / 2);
    if (b % 2) ret = ret * a % mod;
    return ret;
}

// a! % n  -> modular Factorial
ll modFac(ll n, ll m)
{
    if (n == 0)
        return 1;
    return modMul(n , modFac(n - 1, m), m);
}

// s % n
ll mod(string s, ll x){  
    ll res = 0; 
    for(ll i = 0; i < s.size(); i++){
        res *= 10;
        res += s[i] - '0';
        res %= x;
    }
    return res;
}
// print digits n after decimal point
cout << setprecision(13);
// a ^ b  -> binary exponintion
ll binaryExponintion(ll a, ll b){
    ll result = 1;
    while(b){
        if(b % 2){
            result *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    return result;
}
ll power(ll a, ll b){
    if(b == 0) return 1;
    ll res = power(a*a, b/2);
    if(b % 2) res *= a;
    return res;
}

// sum powers 1 to k 
// a^1 + a^2 + a^3 + ... + a^k
ll sumPows(ll a, ll k){
    if(k == 0)
        return 0;
    
    if(k % 2)
        return a * (1 + sumPows(a, k - 1));
    
    ll half = sumPows(a, k / 2);
    return half * (1 + half - sumPows(a, k / 2 - 1));
}

ll gcd(ll a, ll b){
    return (b ? gcd(b, a % b) : a);
}

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll gcd(ll a, ll b){
    while(b != 0){
        swap(a %= b, b);
    }
    return a;
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

// extended euclidean algorithm
// a * x + b * y = gcd(a , b)
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

// permutation and compination
ll permutation(ll n, ll r){
    return fact(n) / fact(n-r);
}
ll compination(ll n, ll r){
    return permutation(n, r) / fact(r);
}
ll Sum_of_Angles_in_Polygons(ll n){
    return (n - 2) * 180;
    // n -> is number of sides
}

double The_Area_of_Polygons(dbl n, dbl s){
    return (n / 4) * s * s * (1 / tan(pi / n));
    // n -> number of side
    // s -> side length
}

// ax + by = gcd(a, b);
// return x, y
// return prime factors of number n
vi primeFac(int n){
    vi v;
    while(n % 2 == 0){
        n /= 2;
        v.push_back(2);
    }
    for(int i = 3; i * i <= n; i+= 2){
        while(!(n % i)) {
            v.push_back(i);
            n /= i;
        }
    }
    if(n != 1) v.push_back(n);
    return v;
}

bool isPrime(int n){
    if(n == 2) return 1;
    if(n < 2 || n % 2 == 0) return 0;
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return 0;
    }
    return 1;
}

// divisors
vi factors(ll n){
    vi v;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0) 
        {   
            v.push_back(i);
            if(i * i != n) v.push_back(n / i);
        }
    }
    return v;
}

// return prime factors of number n
vi primeFac(int n){
    vi v;
    while(n % 2 == 0){
        n /= 2;
        v.push_back(2);
    }
    for(int i = 3; i * i <= n; i+= 2){
        while(!(n % i)) {
            v.push_back(i);
            n /= i;
        }
    }
    if(n != 1) v.push_back(n);
    return v;
}

// count prime numbers in range [1, n]
int countPrime_Sieve(int n){
    vector <bool> isPrime(n + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    
    for(int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(int  = 2 * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    int cnt = 0;
    for(int i = 2; i < n + 1; i++){
        if(isPrime[i]){
            cnt++;
        }
    }
    return cnt;
}


// power of prime number in n!
int factN_PrimePower(int n, int p){
    int pow = 0;
    for(int i = p; i <= n; i = i * p){
        pow += n / i;
    }
    return pow;
}

// power of prime number in n!
int factN_PrimePower(int n, int p){
    ll ans = 0;
    while(p){
        ans += (n /= p);
    }
    return ans;
}

vector<vector<int>>  rangeFactorization(int n){
    vector<vector<int>> divisors(n + 1);

    for(int i = 1; i <= n; i++){
        for(int k = i; k <= n; k += i){
            divisors[k].push_back(i);
        }
    }
    divisors;
}

mii Sieve(int n){
    vector <bool> isPrime(n + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    
    for(int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(int j = 2 * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    mii cnt;
    for(int i = 2; i < n + 1; i++){
        if(isPrime[i]){
            cnt[i] = 1;
        }
    }
    return cnt;
}

vector<int> Seive(int n){
    vector <bool> isPrime(n + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    
    for(int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(int j = 2 * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    vector<int> cnt;
    for(int i = 2; i < n + 1; i++){
        if(isPrime[i]){
            cnt.push_back(i);
        }
    }
    return cnt;
}


// bitwise operation
void bitwiseOperations(){
    AND      ->  &
    OR       ->  |
    XOR      ->  ^
    NOT      ->  ~
    L shift  ->  <<
    R shift  ->  >>
}

string addTwoString(string s1, string s2){
    string sum;
    ll num = 0;
    while(s1.size() > s2.size()) s2='0'+s2;
    while(s1.size() < s2.size()) s1='0'+s1;
    for(int i = s1.size()-1; i >= 0; i--){
        num = (s1[i]-'0')+(s2[i]-'0')+num;
        sum = char((num % 10) + '0') + sum;
        num /= 10;
    }
    if(num == 1){
        sum = '1' + sum;
    }
    return sum;
}

string mulTwoString(string s1, string s2) {
    if (s1 == "0" || s2 == "0") return "0";
    
    vi s(s1.size() + s2.size(), 0);
    
    for (int i = s1.size()-1; i>=0; --i) {
        for (int j=s2.size()-1; j>=0; --j){
            s[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
            s[i + j] += s[i + j + 1] / 10;
            s[i + j + 1] %= 10;
        }
    }
    int i = 0;
    while (i < s.size() && s[i] == 0) ++i;

    string res = "";
    while (i < s.size())
    res.push_back(s[i++] + '0');
    
    return res;
}


// implement a big factorial
string factorial(int N){
    string res;
    res.push_back(1);
    for(int x=2;x<=N;x++){
        int car=0;
        for(int i=0;i<res.size();i++){
            int val = res[i]*x+car;
            res[i]=val %10;
            car=val/10;
        }
        while(car!=0){
            res.push_back(car%10);
            car/=10;
        }
    }
    reverse(res.begin(),res.end());
    for(auto &c : res){
    c += '0';
    }
    return res;
}

void Vector(){
    int n, m;
    // create array n * m filled with trues
    vector<vector<int>> v(n, vector <int> (m)); 

    // Removing v[i] element
    v.erase(v.begin() + i);      // O(n)

    v.insert(v.begin() + i, val);// O(n)
    
    v.resize(unique( all(v) ) - v.begin());

    set_intersection(all(v1), all(v2), back_inserter(v));
    set_difference(all(v1), all(v2), back_inserter(v));
    set_union(all(v1), all(v2), back_inserter(v));  
}



 

// sum((i, j) (k, l)) where (k, l) is the bottom right
int sum_range(int i, int j, int k, int l, vector<vector<int>> & S) {
    return S[k][l] - S[k][j-1] - S[i-1][l] + S[i-1][j-1];
}

void accumSum2D() {
    vector<vector<int>> A =
        { { 0, 0, 0, 0, 0, 0 },
          { 0, 1, 2, 2, 4, 1 },
          { 0, 3, 4, 1, 5, 2 },
          { 0, 2, 3, 3, 2, 4 },
          { 0, 4, 1, 5, 4, 6 },
          { 0, 6, 3, 2, 1, 3 }, };

    // Accumulate each row
    for (int i = 1; i < (int) A.size(); i++)
      for (int j = 1; j < (int) A[0].size(); j++)
        A[i][j] += A[i][j-1];

    // Accumulate each col
    for (int j = 1; j < (int) A[0].size(); j++)
      for (int i = 1; i < (int) A.size(); i++)
          A[i][j] += A[i-1][j];
    cout << sum_range(2, 3, 3, 5, A) << "\n";
}

// sum of 2 num = m
void twoPointers1(){
    int n, m; cin >> n >> m;
    int a[n];
    for(auto & i : a) cin >> i;
    sort(a, a + n);
    int p1 = 0, p2 = n - 1;
    while(p1 < p2){
        if(a[p1] + a[p2] == m) break;
        else if(a[p1] + a[p2] > m)
            p2--;
        else if(a[p1] + a[p2] < m)
            p1--;      
    }
}

// max sum of m elements
void twoPointers2(){
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int mx{}, sum{};
    for(int i = 0; i < m; i++)
        sum += a[i];
    mx = sum;
    for (int i = 0; i < n; i++)
    {
        if(n > i + m) sum = sum - a[i] + a[i + m];
        mx = max(sum, mx);
    }
    cout << mx << endl;
}

// Print 3n+1 Squence, len
void squence_3n_plus_1(int n){
    static int len{};
    len++;
    cout << n << " ";
    if (n == 1)
    {
        cout << "Length: " << len << endl;
        return;
    }
    if (n % 2 == 0)
        squence_3n_plus_1(n / 2);
    else
        squence_3n_plus_1(3 * n + 1);
}

// Left Maximum
void left_max(int a[], int n)
{
    if (n == 0)
        return;
    left_max(a, n - 1);
    a[n] = max(a[n], a[n - 1]);
}

// Right Maximum
void right_max(int a[], int n)
{
    if (n == 1)
        return;
    a[n - 2] = max(a[n - 2], a[n - 1]);
    right_max(a, n - 1);
}

// Palindrome
bool palindrome(int a[], int n)
{
    static int i = {};
    if (i == n / 2)
        return 1;
    if (a[i++] != a[n - i])
        return 0;
    palindrome(a, n);
}

bool palindrome_v1(int a[], int start, int end)
{
    if (start >= end)
        return 1;
    if (a[start] != a[end])
        return 0;
    else
        return palindrome_v1(a, ++start, --end);
}

bool palindrom_v2(int a[], int n)
{
    if (n <= 0)
        return 1;
    if (a[0] != a[n - 1])
        return 0;
    return palindrom_v2(a + 1, n - 2);
}


// Is Prefix
bool is_prefix(string main, string prefix, int start = 0)
{
    if (prefix == "")
        return 1;
    if (start == prefix.length() - 1)
        return 1;
    if (main[start] != prefix[start])
        return 0;
    return is_prefix(main, prefix, ++start);
}

// 
// 400

// 1e5 , 10
// pascal triangle = iCj
// icj => 
// iC1, ic2, ic3, ic4, ic5
vvi pascalTriangle1(ll n){
    vvi pascal(n, vi(n));
    for(int i = 0; i < n; i++){
        ll v = 1;
        for(int j = 0; j <= i; j++){
            cout << v << ' ';
            pascal[i][j] = v;
            v = v * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return pascal;
}

vvl pascalTriangle2(ll n){ 
    vvl pascal(n, vll(n));
    for(int i = 1; i < n; i++){
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for(int j = 1; j < i; j++){
            pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
        }
    }
    return pascal;
}


string s = "ABCDEEFG";
s.substr(1, 3);  // from indx 1 -> 2 "BCD"
s.swap(y);
s.find("E"); // return indx from left
s.rfind("E"); // return indx from right
s.replace(2, 3, "ali");
s.insert(3, "Ali")

// When you use cin >> n;, it reads an integer value for n, but it leaves a newline character (\n) in the input buffer. Then, when you use getline(cin, s);, it reads that newline character as an empty line, resulting in unexpected behavior or crashing

vi dec2binary(int n){
    vi binary(32);
    int i = 0;
    while(n){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    return binary;
}

int convert(long long n) {
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

vi dec2binary(int n){
    vi binary(32);
    int i = 0;
    while(n){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    vi res;
    for(int j = 0; j < i; j++){
        res.PB(binary[j]);
    }
    return res;
}

int binary2dec(string s) {
    ll n = 0;
    reverse (s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        n += (s[i] - '0') * (1 << i);
    }
    return n;
}


const int M = 1e9 + 7;

ll modExp(ll a, ll b, ll mod) {
    if (b <= 0) return 1;
    ll ret = modExp(a * a % mod, b / 2, mod);
    if (b % 2) ret = ret * a % mod;
    return ret;
}

ll modFac(ll n, ll m)
{
    if (n == 0)
        return 1;
    return ((n%m) * (modFac(n-1,m)%m)) % m;
}

ll inverse(ll b) { return modExp(b, M - 2, M);}

ll P(ll n, ll r){
    return ((modFac(n, M) % M) * (inverse(modFac(n - r, M) % M))) % M;
    // return modDiv(modFac(n, M), modFac(n - r, M), M);
}
ll C(ll n, ll r){
    return ((P(n, r) % M) * (inverse(modFac(r, M) % M))) % M;
    // return modDiv(P(n, r), modFac(r, M), M);
}



















// Compination
const int N = 1e5 + 5, mod = 1e9 + 7;

ll factorial[N];

void generate_fact() {
    factorial[0] = 1;
    for (int i = 1; i < N; ++i) {
        factorial[i] = i * factorial[i - 1] % mod;
    }
}

ll power(ll a, ll b) {
    if (b <= 0) return 1;
    ll ret = power(a * a % mod, b / 2);
    if (b % 2) ret = ret * a % mod;
    return ret;
}

ll inverse(ll b) { return power(b, mod - 2); }

ll C(int n, int k) {
    return factorial[n] * inverse(factorial[n - k]) % mod * inverse(factorial[k]) % mod;
}

// (n+k, k+1) in Pascal's Triangle is equal to the binomial coefficient (N+K)C(K+1) = (N+K)C(N-1), where N = n+k and K = k+1.


ll sqroot(ll n){
    ll l = 0, r = INT32_MAX, ans;
    while(l <= r){
        ll m = l + (r - l + 1) / 2;

        if(m * m > n){
            ans = m;
            r = m - 1;
        }
        else if(m * m < n){
            l = m + 1;
        }
        else{
            ans = m;
            break;
        }
    }
    return ans;
}












int countNumBits1(int mask) {   
    int ret = 0;    //1101001 -> 110100 -> 11010 -> 1101 -> 110 -> 11 -> 1 -> 0
    while (mask) {
        if(mask&1)
            ret++;
        mask >>= 1;
    }
    return ret;
    
}

// count nums bits 1
__builtin_popcount(n);

// Get bit
int getBit(int num, int idx) {
  return ((num >> idx) & 1) == 1;       
  // 110100, idx = 4  -->  110 & 1 = 0
}

int setBit1(int num, int idx) {
    return num | (1<<idx);
}

int setBit0(int num, int idx) {
    return num & ~(1<<idx);             
    // 110100, idx = 3  -->  110100 & ~000100 = 110100 & 111011
}

int flipBit(int num, int idx) {
    return num ^ (1<<idx);
}

// len = 3:000,001,010,011,100,101,110,111
void printAllSubsets(int len)  
{
    for (int i = 0; i < (1<<len); ++i)
        printNumber(i, len);

    // For reversed order. Either reverse each item or work from big to small
    //for (int i = (1<<len); i >= 0 ; --i)
    //  printNumber(i, len);
}


int binary_search(vi a, int val, int l, int r){
    if(l <= r){
        int m = l + (r - l + 1) / 2;

        if(a[m] > val) return binary_search(a, val, l, r - 1);
        else if(a[m] < val) return binary_search(a, val, l + 1, r);
        else return m;
    }
    else{
        return KEY_NOT_FOUND
    }
}























































#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, pii> p3i;

typedef pair<ll, ll> pll;
typedef pair<ll, pll> p3ll;

typedef pair<ll, ld> plld;
typedef pair<double, pii> pd2i;

typedef vector<int> vi;
typedef vector<pii> v2i;
typedef vector<p3i> v3i;

typedef map<int, int> mii;
typedef map<ll, ll> mll;

typedef vector<ll> vll;
typedef vector<pll> v2ll;
typedef vector<p3ll> v3ll;

typedef vector<string> vs;
typedef vector<bool> vb;

typedef vector<vi> vvi;
typedef vector<vll> vvl;

#define loop(n)          for(ll i = 0; i < (n); i++)
#define lp(x, s, e)      for(ll x = (s); x < (e); x++)
#define lpe(x, s, e)     for(ll x = (s); x <= (e); x++)

#define loop_r(n)          for(ll i = (n) - 1; i >= 0; i--)
#define lp_r(x, s, e)      for(ll x = (e) - 1; x >= (s); x--)
#define lpe_r(x, s, e)     for(ll x = (e); x >= (s); x--)

#define MP make_pair
#define PB push_back
#define PF push_front
#define EmB emplace_back
#define Em emplace
#define len(s)   (ll)s.length()
#define sz(v)    (ll)v.size()
#define all(a)   a.begin(),a.end()
#define all_r(a)   a.rbegin(),a.rend()
#define clr(x, val)    memset((x), (val), sizeof(x))
#define maxEle *max_element
#define minEle *min_element

#define tests ll t; cin >> t; ll i_t = 0; while(i_t++ < t)
#define SetPre(n, x)  cout << fixed << setprecision(n) << x

#define endl '\n'

#define pi 3.14159265359

#define in(v); for(auto &i : v) cin >> i
#define out(v) for(auto i : v) cout << i << " ";

#define f first
#define s second

void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin*.tie(NULL);
    cout.tie(NULL);
}

void fileIO(void) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}







/********************* GCD Range *****************/
// C++ Program to find GCD of a number in a given Range
// using segment Trees
#include <bits/stdc++.h>
using namespace std;

// To store segment tree
int* st;

/* A recursive function to get gcd of given
	range of array indexes. The following are parameters for
	this function.

	st --> Pointer to segment tree
	si --> Index of current node in the segment tree.
Initially 0 is passed as root is always at index 0 ss &
se --> Starting and ending indexes of the segment
				represented by current node, i.e.,
st[index] qs & qe --> Starting and ending indexes of
query range */
int findGcd(int ss, int se, int qs, int qe, int si)
{
	if (ss > qe || se < qs)
		return 0;
	if (qs <= ss && qe >= se)
		return st[si];
	int mid = ss + (se - ss) / 2;
	return __gcd(findGcd(ss, mid, qs, qe, si * 2 + 1),
				findGcd(mid + 1, se, qs, qe, si * 2 + 2));
}

// Finding The gcd of given Range
int findRangeGcd(int ss, int se, int arr[], int n)
{
	if (ss < 0 || se > n - 1 || ss > se) {
		cout << "Invalid Arguments"
			<< "\n";
		return -1;
	}
	return findGcd(0, n - 1, ss, se, 0);
}

// A recursive function that constructs Segment Tree for
// array[ss..se]. si is index of current node in segment
// tree st
int constructST(int arr[], int ss, int se, int si)
{
	if (ss == se) {
		st[si] = arr[ss];
		return st[si];
	}
	int mid = ss + (se - ss) / 2;
	st[si]
		= __gcd(constructST(arr, ss, mid, si * 2 + 1),
				constructST(arr, mid + 1, se, si * 2 + 2));
	return st[si];
}

/* Function to construct segment tree from given array.
This function allocates memory for segment tree and
calls constructSTUtil() to fill the allocated memory */
int* constructSegmentTree(int arr[], int n)
{
	int height = (int)(ceil(log2(n)));
	int size = 2 * (int)pow(2, height) - 1;
	st = new int[size];
	constructST(arr, 0, n - 1, 0);
	return st;
}

// Driver program to test above functions
int main()
{
	int a[] = { 6 ,5 ,15, 30, 10, 100, 200, 300 };
	int n = sizeof(a) / sizeof(a[0]);

	// Build segment tree from given array
	constructSegmentTree(a, n);

	// Starting index of range. These indexes are 0 based.
	int l = 2;

	// Last index of range.These indexes are 0 based.
	int r = 4;
	cout << "GCD of the given range is:";
	cout << findRangeGcd(l, r, a, n) << "\n";

	return 0;
}
/******************************************************************/
/************************ long long  ******************************/
/******************************************************************/

ll* st;

ll gcd(ll a, ll b){
    return (b ? gcd(b, a % b) : a);
}

ll findGcd(ll ss, ll se, ll qs, ll qe, ll si)
{
	if (ss > qe || se < qs)
		return 0;
	if (qs <= ss && qe >= se)
		return st[si];
	ll mid = ss + (se - ss) / 2;
	return gcd(findGcd(ss, mid, qs, qe, si * 2 + 1),
				findGcd(mid + 1, se, qs, qe, si * 2 + 2));
}

ll findRangeGcd(ll ss, ll se, ll arr[], ll n)
{
	if (ss < 0 || se > n - 1 || ss > se) {
		cout << "Invalid Arguments"
			<< "\n";
		return -1;
	}
	return findGcd(0, n - 1, ss, se, 0);
}

ll constructST(ll arr[], ll ss, ll se, ll si)
{
	if (ss == se) {
		st[si] = arr[ss];
		return st[si];
	}
	ll mid = ss + (se - ss) / 2;
	st[si]
		= gcd(constructST(arr, ss, mid, si * 2 + 1),
				constructST(arr, mid + 1, se, si * 2 + 2));
	return st[si];
}

ll* constructSegmentTree(ll arr[], ll n)
{
	ll height = (ll)(ceil(log2(n)));
	ll size = 2 * (ll)pow(2, height) - 1;
	st = new ll[size];
	constructST(arr, 0, n - 1, 0);
	return st;
}

/******************************************************************/

bool Cycle(int v) {
    vis[v] = 1;
    for (int u : adj[v]) {
        if (vis[u] == 0) {
            if (Cycle(u))
                return true;
        } else if (vis[u] == 1) {
            return true;
        }
    }
    vis[v] = 2;
    return false;
}



bool operator <(const edge &e) const {
    return w > e.w;
}


// monotonic stack, smaller than-before
stack <int> st;
for(int i = n - 1; i >= 0; i--){
    if(st.empty() || a[i] >= a[st.top()]){
        st.push(i);
    }
    else if(a[i] < a[st.top()]){
        while(!st.empty() && a[i] < a[st.top()]){
            ans[st.top()] = i + 1;
            st.pop();
        }
        st.push(i);
    }
}