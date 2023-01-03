// Joan Paneque

#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
int c,n,f,t;

    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> n >> f >> t;
        cout << t % (n + 1) * f << "\n";
    }
}