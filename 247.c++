// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, a, aux;
    
    while(1) {
        cin >> n;
        if (n == 0) break;
        
        int aux[n];

        for (int i = 0; i < n; i++) {
            cin >> aux[i];
        }
        bool c = false;
        for (int i = 1; i < n; i++) {
            if (aux[i] <= aux[i-1]) c = true;
        }

        cout << (c ? "NO\n" : "SI\n");
    }
}