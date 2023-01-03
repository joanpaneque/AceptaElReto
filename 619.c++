// Joan Paneque

#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;


bool stringContainsChar(string a, char b, int strlen) {
    for (int i = 0; i < strlen; i++) {
        if (a[i] == b) return true;
    }
    return false;
}


bool numContainsNum(int n, int num) {
    do {
        if (n % 10 == num) return true;
        n/=10;
    } while(n);
    return false;
}

int numLength(int n) {
    int digits = 0;
    do {
        digits++; 
        n /= 10;
    } while (n);
    return digits;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void displayIntArrayH(int arr[], int len) {
    cout << arr[0];
    for (int i = 1; i < len; i++)
    {
        cout << " " << arr[i];
    }

    cout << "\n";
    
}

vector<string> splitEvery(string str, int n) {
    vector<string> res;
    int z = 0;
    int len = str.size();
    int startIndex = n-1;

    res.push_back("");
    for (int i = 0; i < len; i++) {
        res[z] += str[i];
        if (i % n == startIndex) {
            z++;
            res.push_back("");
        }
    }
    res.pop_back();
    return res;
}

vector<string> divideString(string str, int n) {
    vector<string> res;
    int part_size;
    if (str.size() % n != 0) {
        res[0] == str;
        return res;
    }
    part_size = str.size() / n;

    for (int i = 0; i < n; i++) {
        res.push_back(str.substr(i*part_size, part_size));
    }
    return res;
}

long long factorial(long long n) {
    if (n == 0) return 1;
    return factorial(n-1) * n;
}
int fib(int n) {
    if (n < 3) return 1;
    return fib(n-1) + fib(n-2);
}

vector<char> splitAll(string a) {
    vector<char> res;
    int strlen = a.size();
    for (int i = 0; i < strlen; i++) {
        res.push_back(a[i]);
    }
    return res;
}

vector<string> split(string a, char b) {
    vector<string> res;
    stringstream ss(a);
    string word;
    while(getline(ss, word, b)) {
        res.push_back(word);
    }
    return res;
}

string lower(string a) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    return a;
}

string upper(string a) {
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    return a;
}


class Bloque {
    public:
        int len = 0;
        string letters = "";
        bool ok = false;
};


bool solve(int j, int i, string screen[]) {

    int newI = i*8;
    int newJ = j*8;

    string letters = "";
    int strlen = 0;

    for (int x = newI; x < newI+8; x++) {
        for (int y = newJ; y < newJ+8; y++) {
            if (!stringContainsChar(letters,screen[x][y], strlen)) {
                strlen++;
                if (strlen > 2) return false;
                letters += screen[x][y];
            }
        }
    }
    return true;
}

main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    while(1) {
        cin >> a >> b;
        if (!a && !b) break;

        if ((a % 8 != 0) || (b % 8 != 0)) {
            cout << "NO\n";
            continue;
        }

        string pixels[b];

        for (int i = 0; i < b; i++) {
            cin >> pixels[i];
        }

        // solve(0, 1, pixels);

        bool ok = true;
        for (int x = 0; x < a / 8; x++) {
            for (int y = 0; y < b / 8; y++) {
                // cout << x << " " << y << "\n";
                ok = solve(x, y, pixels);
                if (!ok) break;
            }
            if (!ok) break;

        }
        cout << (ok ? "SI\n" : "NO\n");

    }
    
}

