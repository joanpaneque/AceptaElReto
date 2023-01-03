#include <iostream>
#include <algorithm>
using namespace std;

class Kid {
    public:
        int b;
        int p;
};


bool compareKids(Kid x, Kid y) {
    if (x.b == y.b) {
        if (x.p < y.p) return true;
        return false;
    }
    
    if (x.b > y.b) return true;
    return false;
}

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);


    int n;
    Kid regalos[100000];

    while(1) {
        cin >> n;
        if (!n) break;

        for (int i = 0; i < n; i++) {
            cin >> regalos[i].b >> regalos[i].p;
        }

        sort(regalos, regalos + n, compareKids);

        for (int i = 0; i < n; i++) {
            cout << regalos[i].b << " " << regalos[i].p << "\n";
        }

        cout << "\n";
    }
}