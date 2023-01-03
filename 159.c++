// Joan Paneque

#include <bits/stdc++.h>
using namespace std;

bool solve() {

    int aH, aM, bH, bM, c;
    char aux;
    cin >> aH >> aux >> aM >> bH >> aux >> bM;
    if (aH == 24 && aM == 00 && bH == 24 && bM == 00) return 0;
    cin >> c;

    int count = 0;

    if (aH == bH) {
        if (aH / 10 == c || bH % 10 == c) {
            count += bM - aM + 1;
        } else {
            for (int i = aM; i <= bM; i++) {
                if (i % 10 == c || i / 10 == c) count++;
            }
        }
    } else {
        if (bH - aH == 1) {
            if (aH % 10 == c || aH / 10 == c) {
                count += 60 - aM;
            } else {
                for (int i = aM; i < 60; i++) {
                    if (i % 10 == c || i / 10 == c) count++;
                }
            }
            if (bH % 10 == c || bH / 10 == c) {
                count += bM + 1;
            } else {
                for (int i = 0; i <= bM; i++) {
                    if (i % 10 == c || i / 10 == c) count++;
                }
            }
        } else {
            if (aH % 10 == c || aH / 10 == c) {
                count += 60 - aM;
            } else {
                for (int i = aM; i < 60; i++) {
                    if (i % 10 == c || i / 10 == c) count++;
                }
            }
            if (bH % 10 == c || bH / 10 == c) {
                count += bM + 1;
            } else {
                for (int i = 0; i <= bM; i++) {
                    if (i % 10 == c || i / 10 == c) count++;
                }
            }
            for (int i = aH+1; i < bH; i++) {
                if (i % 10 == c || i / 10 == c) {
                    count += 60;
                } else {
                    if (c < 6) {
                        count+=15;
                    } else {
                        count+=6;
                    }
                }
            }
        }
    }
    cout << count << "\n";
    return 1;

}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);


    while(solve());

    return 0;
}