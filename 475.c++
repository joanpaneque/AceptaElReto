// Joan Paneque

#include <iostream>
#include <math.h>
#include <string>
#include<bits/stdc++.h>
using namespace std;

main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    string frase;
    string stanlee = "stanlee";
    int n;
    cin >> n;
        int k = n-1;
    while (n-- + 1) {
        getline(cin, frase);
        transform(frase.begin(), frase.end(), frase.begin(), ::tolower);
        int reps = 0;
        int idx = 0;
        for (int i = 0; i < frase.length(); i++) {
            if (stanlee[idx] == frase[i]) {
                idx++;
                if (idx == stanlee.length()) {
                    reps++;
                    idx = 0;
                }
            }
            
        }
        if (n != k) cout << reps << "\n";
    }
}