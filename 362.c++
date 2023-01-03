// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d, m;

    while (n--) {
        cin >> d >> m;

        if (d == 25 && m == 12) {
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
    }
}