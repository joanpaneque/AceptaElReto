// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while(n) {
        std::cin >> n;
        if (n) cout << (n * (n + 1) / 2) * 3 << "\n";
    }
}