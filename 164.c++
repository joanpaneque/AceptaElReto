// Joan Paneque
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int x, y, x1, y1;
    while(1) {
        cin >> x >> y >> x1 >> y1;
        if (x > x1 || y > y1) break;
        cout << abs(x - x1) * abs(y - y1) << "\n";
    }
}