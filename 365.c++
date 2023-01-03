// Joan Paneque

#include <iostream>
using namespace std;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);

    int c;
    cin >> c;

    int a, b;
    int z;
    int aux;
    int queue[100];

    while (c--) {
        cin >> a >> b;
        // b = b-1;
        aux = 0;
        for (int i = 0; i < a; i++) {
              cin >> queue[i];
        }

        for (int i = 0; i < b; i++) {
            queue[i]--;
            aux += 2;
        }

        while (queue[b-1] > 0) {
            for (int i = 0; i < a; i++) {
                if (queue[i] > 0) {
                    queue[i]--;
                    aux += 2;
                }
            }
        }
        cout << aux << "\n";
    }
}