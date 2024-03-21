#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k, s;
    string d;
    while(true) {
        cin >> n;
        if (n == 0) break;
        map<string,int> m;
        while(n--) {
            cin >> d >> k;
            if (d == "?") {
                s = 0;
                while(k--) {
                    cin >> d;
                    s += m[d];
                    m[d] = 0;
                }
                cout << s << "\n";
            } else {
                m[d] += k;
            }
        }
        cout << "\n";
    }
}