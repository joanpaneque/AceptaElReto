// Joan Paneque

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FOR(i, a, b) for (int i = a; i < b; i++)

bool solve() {

    string abc, num;

    cin >> num >> abc;
    if (num == "9999" && abc == "ZZZ") return 0;

    int a = (int)abc[0], b = (int)abc[1], c = (int)abc[2];


    if (num == "9999") {
        num = "0000";
        if (c == 90) {
            c = 66;
            if (b == 90) {
                b = 66;
                if (a == 90) {
                    a = 66;
                } else {
                    a++;
                    if (a == 69 || a == 73 || a == 79 || a == 85) a++;
                }
            } else {
                b++;
                if (b == 69 || b == 73 || b == 79 || b == 85) b++;
            }
        } else {
            c++;
            if (c == 69 || c == 73 || c == 79 || c == 85) c++;
        }
    } else {
        num = to_string(stoi(num) + 1);
        while (num.size() < 4) num = "0" + num;
    }

    cout << num << " " << (char)a << (char)b << (char)c << "\n";
    return 1;

}


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    while(solve());

    return 0;
}