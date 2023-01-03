// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    int n;
    while(1) {
        cin >> n;
        if (n == 0) break;
        cout << (n % 2 == 0 ? "DERECHA\n" : "IZQUIERDA\n");
    }
}