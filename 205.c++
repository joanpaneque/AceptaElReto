// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;

int reverseDigits(int n) {
    int* nPTR = &n;
    int reverse = 0, rem;
    while(*nPTR != 0) {    
        rem = *nPTR % 10;      
        reverse = reverse * 10 + rem;    
        *nPTR /= 10;    
    }
    return reverse;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, j = 1, e;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> j;
        for (e = 1; j <= 1000000000; e++) {
            j += reverseDigits(j);
            if (j == reverseDigits(j)) break;
        }

        if (j > 1000000000) {
            cout << "Lychrel?\n";
        } else {
            cout << e << " " << j << "\n";
        }
    }
}