// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, S, A, B;
    cin >> n;
    while(n--) {
        cin >> S >> A >> B;
        cout << min(abs(S - A) + abs(A - B), abs(S - B) + abs(A - B)) << "\n";
    }
}