// Joan Paneque

#include <iostream>
#include <math.h>

using namespace std;


int countDigit(int n)
{
   if(n == 0)
     return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

bool sameDigits(int N)
{
    //if (N < 1000) return 0;
    int digit = N % 10;
    while (N != 0)
    {
        int current_digit = N % 10;
        N = N / 10;
        if (current_digit != digit)
        {
            return 0;
        }
    }
    return 1;
}

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num * pow(10, 4 - countDigit(rev_num));
}

int sortDigits(int num)
{

    //if (sameDigits(num)) return num;
    int digit, temp, ans = 0;

    for (digit = 0; digit < 10; digit++) {
        for (temp = num; temp > 0; temp /= 10) {
            if (temp % 10 == digit) ans = ans * 10 + digit;
        }
    }
    return ans;
}

int kaprekar(int num)
{

    int res = num, i;
    //if (sameDigits(num)) return 8;

    for (i = 0; res != 6174; i++) {
        res = sortDigits(res);
        res = max(res, reverseDigits(res)) - min(res, reverseDigits(res));
        if (res == 0) return 8;
    }

    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int k[n];


    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    for (int i = 0; i < n; i++) {
        cout << kaprekar(k[i]) << "\n";
    }

}