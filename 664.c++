// Joan Paneque

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);
    int c, c1, n;


    while(1) {
        cin >> c;
        
        if (c == 0) {
            break;
        }

        int mins[c];
        for (int i = 0; i < c; i++) {
            cin >> c1;
            int max = 0;
            for (int e = 0; e < c1; e++) {
                cin >> n;
                if (n > max) {
                    max = n;
                }
            }
            mins[i] = max;
        }

        sort(mins, mins + c);

        cout << mins[0] << "\n";
    }
}