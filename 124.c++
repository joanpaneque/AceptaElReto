// Joan Paneque

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FOR(i, a, b) for (int i = a; i < b; i++)


bool solve() {

    string a, b;
    cin >> a >> b;
    if (a == "0" && b == "0") return 0;

    int iA = a.size() - 1;
    int iB = b.size() - 1;

    int carry = 0;

    int carries = 0;
    while (iA >= 0 && iB >= 0) {
        if (stoi(a.substr(iA, 1)) + stoi(b.substr(iB,1)) + carry >= 10) {
            carry = 1;
            carries++;
        } else {
            carry = 0;
        }
        iA--;
        iB--;
    }
    //  + (((iA >= 0 && (stoi(a.substr(iA, 1)) == 9)) || (iB >= 0 && stoi(a.substr(iB, 1)) == 9)) ? carry : 0)
    
    int extracarry = 0;
    while (iA >= 0) {
        if (stoi(a.substr(iA, 1)) == 9 && carry) {
            extracarry++;
        } else {
            carry = 0;
        }
        iA--;
    }
    while (iB >= 0) {
        if (stoi(b.substr(iB, 1)) == 9 && carry) {
            extracarry++;
        } else {
            carry = 0;
        }
        iB--;

    }
    cout << carries + extracarry << "\n";
    return 1;
}


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    while(solve());

    return 0;
}