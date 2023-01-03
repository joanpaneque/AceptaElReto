// Joan Paneque

#include <iostream>
#include <string.h>
using namespace std;


int solve(int resistance) {
    int counter = 0, i, elephant;
    for (i = 0; ; i++) {
        cin >> elephant;
        counter += elephant;
        if (counter > resistance) break;
        if (!elephant) return i;
    }

    while (elephant) {
        cin >> elephant;
    }
    return i;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int resistance = 1;
    string ans;
    cin >> resistance;

    while (resistance) {
        ans += to_string(solve(resistance)) + "\n";
        cin >> resistance;
    }

    cout << ans;
    
}