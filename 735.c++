#include <iostream>
using namespace std;

bool canArrive(char** m, int x, int y, int h, int w) {
    m[x][y] = 'Z';
    if (x == w - 1 && y == h-1) {
        return true;
    }
    if (x + 1 < w && m[x + 1][y] != 'X' && m[x + 1][y] != 'Z') {
        return (canArrive(m, x + 1, y, h, w));
    }
    if (y + 1 < h && m[x][y + 1] != 'X' && m[x][y + 1] != 'Z') {
        return (canArrive(m, x, y + 1, h, w));
    }
    if (y - 1 >= 0 && m[x][y - 1] != 'X' && m[x][y - 1] != 'Z') {
        return (canArrive(m, x, y - 1, h, w));
    }
    if (x - 1 >= 0 && m[x - 1][y] != 'X' && m[x - 1][y] != 'Z') {
        return (canArrive(m, x - 1, y, h, w));
    }
    m[x][y] = 'X';
    if (x + 1 < w && m[x + 1][y] == 'Z') {
        return (canArrive(m, x + 1, y, h, w));
    }
    if (y + 1 < h && m[x][y + 1] == 'Z') {
        return (canArrive(m, x, y + 1, h, w));
    }
    if (y - 1 >= 0 && m[x][y - 1] == 'Z') {
        return (canArrive(m, x, y - 1, h, w));
    }
    if (x - 1 >= 0 && m[x - 1][y] == 'Z') {
        return (canArrive(m, x - 1, y, h, w));
    }
    return false;
}

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int w, h;

    while(true) {
        cin >> h >> w;
        if (w == 0 && h == 0) break;

        char** m = new char*[w];
        for (int i = 0; i < w; ++i) {
            m[i] = new char[h];
        }

        for (int y = 0; y < h; y++) {
            for (int x = 0; x < w; x++) {
                cin >> m[x][y];
            }
        }
        bool arribat = canArrive(m, 0, 0, h, w);
        if (arribat) {
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
    }
}