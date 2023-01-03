// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool par;
    while(1) {
        cin >> n;
        if (n < 0) break;
        par = true;
        while (n > 0) {
            if (n % 10 % 2 == 1) par = false;
            n /= 10;
        }

        cout << (par ? "SI\n" : "NO\n");
    } 
}