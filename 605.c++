// Joan Paneque

#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;

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

main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    string a;

    int inv = 0;
    int ver = 0;

    while(1) {
        inv = 0;
        ver = 0;
        cin >> a;
        if (a == ".") break;

        if (a == "I") inv++;
        else if(a == "V") ver++;

        while(1) {
            cin >> a;
            if (a == ".") break;
            if (a == "I") inv++;
            else if(a == "V") ver++;
        }

        if (inv == ver) cout << "EMPATE\n";
        if (ver > inv) cout << "VERANO\n";
        if (inv > ver) cout << "INVIERNO\n";
    }

}

