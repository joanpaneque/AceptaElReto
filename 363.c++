// Joan Paneque

#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int E;
    int n, i;
    int aux, sum;


    while(1) {
        cin >> E;
        if (E == 0) break;
        cin >> n;



        sum = 0;
        for (i = 0; i < n; i++){
            cin >> aux;
            sum+=aux;
        }
        aux = 0;

        i = 0;
        while(aux < sum) {
            aux += E;
            i++;
        }

        cout << i << "\n";

    }
    
}