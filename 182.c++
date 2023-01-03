// Joan Paneque

#include <iostream>
#include <math.h>

using namespace std;

int n, j;

int intLength(int n)
{
    int i;

    for (i = 0; n; i++)
    {
        n /= 10;
    }
    return i;
}

int getNum(int num, int n)
{
    n = num / pow(10, n);
    return n % 10;
}

int solve(int n)
{
    j = 1;
    for (int i = 0; i < intLength(n); i++)
    {
        j *= getNum(n, i);
    }
    return j;
}

int main()
{

    int n;
    string ans;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        int repeticiones = 0;
        cin >> num;

        while (num > 9)
        {
            int producto = 1;
            while (num != 0)
            {
                int unidades = num % 10;
                producto *= unidades;
                num = (num - unidades) / 10;
            }
            repeticiones++;
            num = producto;
        }
        ans += to_string(repeticiones) + "\n";
    }

    cout << ans;
}