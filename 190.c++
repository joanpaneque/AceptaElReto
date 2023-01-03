// Joan Paneque

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, den;
    long long int ans;
    while (1) {
        cin >> num >> den;
        if (den > num) break;
        ans = 1;
        for (int i = num; i > den; i--) ans *= i;
        cout << ans << "\n";
    }
}