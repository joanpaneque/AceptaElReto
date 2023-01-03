// Joan Paneque

#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <map>
using namespace std;

bool vectorStringContainsSubstring(vector<string> a, string substring, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (a[i] == substring)
            return true;
    }
    return false;
}

bool numContainsNum(int n, int num)
{
    do
    {
        if (n % 10 == num)
            return true;
        n /= 10;
    } while (n);
    return false;
}

int numLength(int n)
{
    int digits = 0;
    do
    {
        digits++;
        n /= 10;
    } while (n);
    return digits;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void displayVectorStringArrayH(vector<string> arr, int len)
{
    cout << arr[0];
    for (int i = 1; i < len; i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n";
}

void displayStringArrayH(string arr[], int len)
{
    cout << arr[0];
    for (int i = 1; i < len; i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n";
}

void displayIntArrayH(int arr[], int len)
{
    cout << arr[0];
    for (int i = 1; i < len; i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n";
}

vector<string> splitEvery(string str, int n)
{
    vector<string> res;
    int z = 0;
    int len = str.size();
    int startIndex = n - 1;

    res.push_back("");
    for (int i = 0; i < len; i++)
    {
        res[z] += str[i];
        if (i % n == startIndex)
        {
            z++;
            res.push_back("");
        }
    }
    res.pop_back();
    return res;
}

bool stringArrayContainsString(string arr[], string str, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == str)
            return true;
    }
    return false;
}

vector<string> divideString(string str, int n)
{
    vector<string> res;
    int part_size;
    if (str.size() % n != 0)
    {
        res[0] == str;
        return res;
    }
    part_size = str.size() / n;

    for (int i = 0; i < n; i++)
    {
        res.push_back(str.substr(i * part_size, part_size));
    }
    return res;
}

long long factorial(long long n)
{
    if (n == 0)
        return 1;
    return factorial(n - 1) * n;
}
int fib(int n)
{
    if (n < 3)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

vector<char> splitAll(string a)
{
    vector<char> res;
    int strlen = a.size();
    for (int i = 0; i < strlen; i++)
    {
        res.push_back(a[i]);
    }
    return res;
}

vector<string> split(string a, char b)
{
    vector<string> res;
    stringstream ss(a);
    string word;
    while (getline(ss, word, b))
    {
        res.push_back(word);
    }
    return res;
}

string lower(string a)
{
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    return a;
}

string upper(string a)
{
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    return a;
}

string pushDigit(string num, char digit)
{
    return num + digit;
}

class BigInt {
public:
    int sign;
    string s;

    BigInt()
        : s("")
    {
    }

    BigInt(string x)
    {
        *this = x;
    }

    BigInt(int x)
    {
        *this = to_string(x);
    }

    BigInt negative()
    {
        BigInt x = *this;

        x.sign *= -1;

        return x;
    }

    BigInt normalize(int newSign)
    {
        for (int a = s.size() - 1; a > 0 && s[a] == '0'; a--)
            s.erase(s.begin() + a);

        sign = (s.size() == 1 && s[0] == '0' ? 1 : newSign);

        return *this;
    }

    void operator=(string x)
    {
        int newSign = (x[0] == '-' ? -1 : 1);

        s = (newSign == -1 ? x.substr(1) : x);

        reverse(s.begin(), s.end());

        this->normalize(newSign);
    }

    bool operator==(const BigInt& x) const
    {
        return (s == x.s && sign == x.sign);
    }

    bool operator<(const BigInt& x) const
    {
        if (sign != x.sign)
            return sign < x.sign;

        if (s.size() != x.s.size())
            return (sign == 1 ? s.size() < x.s.size() : s.size() > x.s.size());

        for (int a = s.size() - 1; a >= 0; a--)
            if (s[a] != x.s[a])
                return (sign == 1 ? s[a] < x.s[a] : s[a] > x.s[a]);

        return false;
    }

    bool operator<=(const BigInt& x) const
    {
        return (*this < x || *this == x);
    }

    bool operator>(const BigInt& x) const
    {
        return (!(*this < x) && !(*this == x));
    }

    bool operator>=(const BigInt& x) const
    {
        return (*this > x || *this == x);
    }

    BigInt operator+(BigInt x)
    {
        BigInt curr = *this;

        if (curr.sign != x.sign)
            return curr - x.negative();

        BigInt res;

        for (int a = 0, carry = 0; a < s.size() || a < x.s.size() || carry; a++) {
            carry += (a < curr.s.size() ? curr.s[a] - '0' : 0) + (a < x.s.size() ? x.s[a] - '0' : 0);

            res.s += (carry % 10 + '0');

            carry /= 10;
        }

        return res.normalize(sign);
    }

    BigInt operator-(BigInt x)
    {
        BigInt curr = *this;

        if (curr.sign != x.sign)
            return curr + x.negative();

        int realSign = curr.sign;

        curr.sign = x.sign = 1;

        if (curr < x)
            return ((x - curr).negative()).normalize(-realSign);

        BigInt res;

        for (int a = 0, borrow = 0; a < s.size(); a++) {
            borrow = (curr.s[a] - borrow - (a < x.s.size() ? x.s[a] : '0'));

            res.s += (borrow >= 0 ? borrow + '0' : borrow + '0' + 10);

            borrow = (borrow >= 0 ? 0 : 1);
        }

        return res.normalize(realSign);
    }

    BigInt operator*(BigInt x)
    {
        BigInt res("0");

        for (int a = 0, b = s[a] - '0'; a < s.size(); a++, b = s[a] - '0') {
            while (b--)
                res = (res + x);

            x.s.insert(x.s.begin(), '0');
        }

        return res.normalize(sign * x.sign);
    }

    BigInt operator/(BigInt x)
    {
        if (x.s.size() == 1 && x.s[0] == '0')
            x.s[0] /= (x.s[0] - '0');

        BigInt temp("0"), res;

        for (int a = 0; a < s.size(); a++)
            res.s += "0";

        int newSign = sign * x.sign;

        x.sign = 1;

        for (int a = s.size() - 1; a >= 0; a--) {
            temp.s.insert(temp.s.begin(), '0');
            temp = temp + s.substr(a, 1);

            while (!(temp < x)) {
                temp = temp - x;
                res.s[a]++;
            }
        }

        return res.normalize(newSign);
    }

    BigInt operator%(BigInt x)
    {
        if (x.s.size() == 1 && x.s[0] == '0')
            x.s[0] /= (x.s[0] - '0');

        BigInt res("0");

        x.sign = 1;

        for (int a = s.size() - 1; a >= 0; a--) {
            res.s.insert(res.s.begin(), '0');

            res = res + s.substr(a, 1);

            while (!(res < x))
                res = res - x;
        }

        return res.normalize(sign);
    }

    string toString() const
    {
        string ret = s;

        reverse(ret.begin(), ret.end());

        return (sign == -1 ? "-" : "") + ret;
    }

    BigInt toBase10(int base)
    {
        BigInt exp(1), res("0"), BASE(base);

        for (int a = 0; a < s.size(); a++) {
            int curr = (s[a] < '0' || s[a] > '9' ? (toupper(s[a]) - 'A' + 10) : (s[a] - '0'));

            res = res + (exp * BigInt(curr));
            exp = exp * BASE;
        }

        return res.normalize(sign);
    }

    BigInt toBase10(int base, BigInt mod)
    {
        BigInt exp(1), res("0"), BASE(base);

        for (int a = 0; a < s.size(); a++) {
            int curr = (s[a] < '0' || s[a] > '9' ? (toupper(s[a]) - 'A' + 10) : (s[a] - '0'));

            res = (res + ((exp * BigInt(curr) % mod)) % mod);
            exp = ((exp * BASE) % mod);
        }

        return res.normalize(sign);
    }

    string convertToBase(int base)
    {
        BigInt ZERO(0), BASE(base), x = *this;
        string modes = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        if (x == ZERO)
            return "0";

        string res = "";

        while (x > ZERO) {
            BigInt mod = x % BASE;

            x = x - mod;

            if (x > ZERO)
                x = x / BASE;

            res = modes[stoi(mod.toString())] + res;
        }

        return res;
    }

    BigInt toBase(int base)
    {
        return BigInt(this->convertToBase(base));
    }

    friend ostream& operator<<(ostream& os, const BigInt& x)
    {
        os << x.toString();

        return os;
    }
};

vector<int> splitNums(int n) {
    int num = n;
    vector<int> res;
    while (num > 0) {
        res.push_back(num%10);
        num /= 10;
    }
    return res;
}


int charToInt(char a) {
    return (int)a - 48;
}

class object {
    public:
        string name;
        int a;
        int b;
        int pos;
};


bool compare(object a, object b) {
    if (a.a == b.a) {
        if (a.b == b.b) {
            return a.pos < b.pos;
        }
        return a.b < b.b;
    }
    return a.a > b.a;
}

main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;

    int a, b;
    string c;

    while(1) {
        cin >> n;
        if (!n) break;

        object sarc[n];

        for (int i = 0; i < n; i++) {
            object aux;
            cin >> aux.name;
            cin >> aux.a;
            cin >> aux.b;
            aux.pos = i;
            
            sarc[i] = aux;
        }
        sort(sarc, sarc+n, compare);

        cout << sarc[0].name;
        for (int x = 1; x < n; x++) {
            cout << " " << sarc[x].name;
        }
        cout << "\n";
    }
}

