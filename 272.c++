// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;



int decToBase6(int n) {
    int remainder; 
    int b6 = 0, i = 1;
   
    while(n != 0) {
        remainder = n%6;
        n = n/6;
        b6 = b6 + (remainder*i);
        i = i*10;
    }
    return b6;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int c, b6, b10, i;
    cin >> c;

    while(c--) {
        cin >> b10;
        cout << decToBase6(b10) << "\n";
    }
}