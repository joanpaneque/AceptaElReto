// Joan Paneque

#include <iostream>
using namespace std;


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, b, c, s;

    cin >> n;
    while(n--) {
        c = 0;
        cin >> b;
        c += b * 6;
        cin >> b;
        c += b * 8;
        cin >> b;
        c += b * 10;
        cin >> b >> s;
        c += b * s * 2;

        cout << c << "\n";
    }

}