// Joan Paneque

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FOR(i, a, b) for (int i = a; i < b; i++)


bool solve() {

    string n;
    cin >> n;
    if (n == "0") return 0;

    int sum = 0;
    int i;
    string ceros = "";
    if (n.size() < 13 && n.size() > 8) {
        for (i = 0; i < 13 - n.size(); i++) {
            ceros += "0";
        }
        n = ceros + n;
    } else if (n.size() < 8) {
        for (i = 0; i < 8 - n.size(); i++) {
            ceros += "0";
        }
        n = ceros + n;
    } else if (n.size() > 13) {
        cout << "NO\n";
        return 1;
    }

    bool odd = n.size() % 2 == 0;
    for (i = 0; i < n.size(); i++) {
        sum += stoi(n.substr(i, 1)) * (i % 2 == 0 ? (odd ? 3 : 1) : (odd ? 1 : 3));
    }

    // cout << sum;

    if (sum % 10 != 0) cout << "NO\n";
    else if (i == 8) {
        cout << "SI\n";
    } else {
        cout << "SI ";
        string s = n.substr(0, 3);
        if (s == "380") {
            cout << "Bulgaria\n";
            return 1;
        }
        if (s == "539") {
            cout << "Irlanda\n";
            return 1;
        }
        if (s == "560") {
            cout << "Portugal\n";
            return 1;
        }
        if (s == "759") {
            cout << "Venezuela\n";
            return 1;
        }
        if (s == "850") {
            cout << "Cuba\n";
            return 1;
        }
        if (s == "890") {
            cout << "India\n";
            return 1;
        }
        s = s.substr(0, 2);
        if (s == "50") {
            cout << "Inglaterra\n";
            return 1;
        }
        if (s == "70") {
            cout << "Noruega\n";
            return 1;
        }
        s = s.substr(0, 1);

        if (s == "0") {
            cout << "EEUU\n";
            return 1;
        }
        cout << "Desconocido\n";
    }
    return 1;
}


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    while(solve());

    return 0;
}