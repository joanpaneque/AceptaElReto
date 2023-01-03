// Joan Paneque

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}


int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int c;
    int hijos, midiclorianos;
    int aux;
    int influencia;
    int mejHijos[20];

    while(1) {
        cin >> c;
        if (!c) break;

        for (int i = 0; i < c; i++) {
            cin >> hijos >> midiclorianos;
            influencia = 0;
            for (int e = 0; e < hijos; e++) {
                cin >> aux;
                aux *= midiclorianos;
                if (aux > influencia) influencia = aux;
            }
            mejHijos[i] = influencia;
            // cout << influencia << " ";
        }
        bubbleSort(mejHijos, c);
        for (int i = c-1; i >= 0; i--) {
            cout << mejHijos[i] << (i == 0 ? "" : " ");
        }
        cout << "\n";
    }
}