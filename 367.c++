// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int c;
    cin >> c;
    
    while (c--) {
        int pI, n, min = -1, pIF, idx, res;
        bool b;
        cin >> pI >> n;
        int pN[n];
        for (int i = 0; i < n; i++) {
            cin >> pN[i];
        }

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                b = false;
                if (pN[i] == -1) continue;
                res = abs(pN[i] - pI);
                if (min > res || min == -1) {

                    min = res;

                    for (int e = i; e < n; e++) {
                        if (res == abs(pN[e] - pI) && pN[e] > pN[i]) {
                            pIF = pN[e];
                            idx = e;
                            b = true;
                        }
                    }
                    if (!b) {
                        pIF = pN[i];
                        idx = i;
                    }
                }
            }
            cout << pIF << (j == n-1 ? "" : " ");
            pI = pIF;
            min = -1;
            pN[idx] = -1;
        }
        cout << "\n";
    }
}