// Joan Paneque

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int area, width;

    for (;;) {
        cin >> area;
        if (area == 0) break;
        for (width = ceil(sqrt(area)); area % width != 0; width--) {}
        cout << max(area / width, width) << "\n";
    }
    return 0;
}