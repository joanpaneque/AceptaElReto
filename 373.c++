// Joan Paneque

#include <iostream>
#include <vector>
#include <math.h>
#include <sstream>

using namespace std;

int main() {

    cin.sync_with_stdio(0);
    cin.tie(0);
    long long int n, a;
    cin >> n;
    while(n--) {
        cin >> a;
        cout << (((a*2)+((a-2)*2)) * (a-2)) + (a*a*2) << "\n";
    }
}