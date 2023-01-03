// Joan Paneque

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cases;

    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int records;
        string output;
        cin >> records;
        string inputs[records];

        for (int j = 0; j < records; j++) {
            cin >> inputs[j];
        }
        for (int e = 0; e < 3; e++) {
            for (int j = 0; j < records; j++) {
                output += inputs[j][e];
            } 
        }
        cout << output << "\n";
    }
}