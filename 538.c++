// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    while(1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        if (b <= a) cout << "CUERDO\n";
        else cout << "SENIL\n";
    }
}