// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;
    int a[6], b[6];

    for (int e = 0; e < n; e++) {
        for (int i = 0; i < 6; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < 6; i++) {
            cin >> b[i];
        }

        bool ok = true;

        int corr = a[0] + b[0];


        for (int i = 0; i < 6; i++) {
            if (a[i] + b[i] != corr) ok = false;
        }

        if (ok) {
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
    }
}