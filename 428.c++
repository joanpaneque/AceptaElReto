// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n;
    long check;

    cin >> n;
    while(n--) {
        cin >> check;


        int counter = 0;
        while(check) {
            if (check % 5 == 4) counter++;
            check /= 5;
        }
        if (counter > 1) {
            cout << "SI\n";
        }
        else {
            cout << "NO\n";
        }
    }
}