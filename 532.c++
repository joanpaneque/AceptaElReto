// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int count;
    int n, t;

    cin >> count;

    while (count--) {
        cin >> n >> t;
        cout << t - n << "\n";
    }
}