// Joan Paneque

#include <iostream>
#include <iomanip>
using namespace std;

int t;

void solve() {
    int n = 1;
    int pages = 0;
    while (n > 0) {
        cin >> n;
        pages += n;
    }
    pages *= t;
    char v = ':';
    cout << setw(2) << setfill('0') << pages / 3600 << v
         << setw(2) << setfill('0') << pages / 60 % 60 << v
         << setw(2) << setfill('0') << pages % 60 << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t) {
        solve();
        cin >> t;
    } 
    return 0;
}