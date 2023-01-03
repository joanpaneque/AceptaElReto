// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);


    int aux, n, sum;

    while(1) {
        cin >> n;
        if (n == 0) break;
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            sum += aux;
        }

        cout << sum << "\n";

    }
}