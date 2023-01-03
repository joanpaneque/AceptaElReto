#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

bool comparar(int x, int y, string cubo[], string entrada[]) {
    bool precalculo[9] = {
        cubo[0][0] == entrada[0+y][0+x],
        cubo[0][1] == entrada[0+y][1+x],
        cubo[0][2] == entrada[0+y][2+x],
        cubo[1][0] == entrada[1+y][0+x],
        cubo[1][1] == entrada[1+y][1+x],
        cubo[1][2] == entrada[1+y][2+x],
        cubo[2][0] == entrada[2+y][0+x],
        cubo[2][1] == entrada[2+y][1+x],
        cubo[2][2] == entrada[2+y][2+x]
    };
    for (int i = 0; i < 9; i++) {
        if (!precalculo[i]) return false;
    }
    // entrada[0+y][0+x] = '_';
    return true;
} 

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    int f, c, k;
    string entrada[50*3];

    bool found = false;
  
    while(true) {
        cin >> f >> c;

        if (f == 0 || c == 0) return 0;
        
        for (int y = 0; y < f*3; y++) {
            cin >> entrada[y];
        }

        cin >> k;
        string nuevos[k][3];
        for (int i = 0; i < k; i++) {
            for (int y = 0; y < 3; y++) {
                cin >> nuevos[i][y];
            }
            found = false;
            
            for (int y = 0; y < f*3; y+=3) {
                for (int x = 0; x < c*3; x+=3) {
                    if (comparar(x, y, nuevos[i], entrada)) {
                        found = true;
                        cout << y/3+1 << " " << x/3+1 << "\n";
                        break;
                    }
                }
                if (found) break;
            }
            if (!found) cout << "NO SE USA\n";
        }
    }
    return 0;
}