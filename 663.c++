// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    int n;
    int c;
    cin >> n;

    while(n--) {
        cin >> c;
        if (c >= 0) {
            cout << c-1;
        } else {
            cout << c;
        }
        cout << "\n";
    }
}