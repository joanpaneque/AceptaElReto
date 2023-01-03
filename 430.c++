// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int c, d, n, b;

    while(1) {
        cin >> c;
        if (!c) break;
        b = 0;

        for (int i = 0; i < c; i++) {
            cin >> d >> n;
            if (i == 0) {
                b = d;
            } else {
                while (d <= b)
                    d += n;
                b = d;
            }
        }
        cout << b << "\n";

    }
}