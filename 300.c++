// Joan Paneque

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, l;
    int a, e, i, o, u;
    string s;
    cin >> n;

    while(n--) {
        a = 0;
        e = 0;
        i = 0;
        o = 0;
        u = 0;
        cin >> s;
        l = s.length();

        for (int j = 0; j < l; j++) {
            if (s[j] == 'a') a = 1;
            if (s[j] == 'e') e = 1;
            if (s[j] == 'i') i = 1;
            if (s[j] == 'o') o = 1;
            if (s[j] == 'u') u = 1;
        }

        if (a == 1 && e == 1 && i == 1 && o == 1 && u == 1) {
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
    }
}