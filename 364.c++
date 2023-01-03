// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);


    string input;
    int l;

    while(1) {
        getline(cin, input);
        if (input == "FIN") break;

        l = input.length();
        for (int i = 0; i < l; i++) {
            if (input[i] == ' ') {
                cout << " "; 
            } else {
                cout << (char)(((int)input[i]-65+1) % 26 + 65);
            }
        }
        cout << "\n";
    }
}