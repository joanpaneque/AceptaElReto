// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a, b;
    char aux;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> aux >> b;
        if (abs(a-b) == 1 && min(a, b) % 2 == 0) {
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
    }
}