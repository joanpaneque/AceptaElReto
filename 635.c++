// Joan Paneque

#include <bits/stdc++.h>

using namespace std;

int e;

int solve() {
if (e % 100 == 0) return e / 100;
  return (e / 100) + 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int l;
  
  cin >> l;
  
  for (int i = 0; i < l; i++) {
  cin >> e;
    cout << solve() << "\n";
}

}