// Joan Paneque

#include <iostream>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	while (n != 0 || k != 0) {
		int num = n*(n / 2) + k;
		cout << n * (2 * num + n - 1) / 2 << '\n';
		cin >> n >> k;
	}
}