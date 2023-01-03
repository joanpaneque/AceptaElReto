// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;

    cin >> n ;

    while (n--) {
        cin >> a >> b;
       cout << (a + b < 0 ? "NO\n" : "SI\n"); 
    }
}