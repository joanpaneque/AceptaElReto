// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n, a, b;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        cout << (a+1) * b + (b+1) * a << "\n";
    }
}