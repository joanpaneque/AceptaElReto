// Joan Paneque

#include <iostream>
using namespace std;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >>n;


    string A;
    string B;
    while(n--) {

        cin >> A >> B;

        if (A == "Luke" && B == "padre") {
            cout << "TOP SECRET\n";
        } else {
            cout << A << ", yo soy tu " << B << "\n";
        }
        
    }
}