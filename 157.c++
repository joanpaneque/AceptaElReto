// Joan Paneque

#include <iostream>
using namespace std;

int getDays(int x) {
    int m = x;
            switch (m) {
            case 1:
                m = 31;
                break;
            case 2:
                m = 28;
                break;
            case 3:
                m = 31;
                break;
            case 4:
                m = 30;
                break;
            case 5:
                m = 31;
                break;
            case 6:
                m = 30;
                break;
            case 7:
                m = 31;
                break;
            case 8:
                m = 31;
                break;
            case 9:
                m = 30;
                break;
            case 10:
                m = 31;
                break;
            case 11:
                m = 30;
                break;
            case 12:
                m = 31;
                break;
            
        }
        return m;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, d, m;
    cin >> n;
    while (n--) {
        cin >> d >> m;

        int days = 0;
        for (int i = 1; i < m; i++) {
            days += getDays(i);
        }
        days += d;
        cout << 365 - days << "\n";

    }
}