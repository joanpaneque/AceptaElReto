// Joan Paneque

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FOR(i, a, b) for (int i = a; i < b; i++)


bool solve() {

    int n;
    int f;
    cin >> n;
    // get last factorial digit
    while(n--) {
        cin >> f;
        if (f > 4) cout << "0\n";
        else if (f == 4) cout << "4\n";
        else if (f == 3) cout << "6\n";
        else if (f == 2) cout << "2\n";
        else cout << "1\n";
    }

    return 0;
}


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    while(solve());

    return 0;
}