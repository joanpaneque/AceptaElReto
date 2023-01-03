// Joan Paneque

#include <iostream>
#include <math.h>
using namespace std;

int getHourFromString(string a) {
  return stoi(a.substr(0,2));
}

int getMinuteFromString(string a) {
  return stoi(a.substr(3, 2));
}

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
  string a;
  int mins;
  
  while(1) {
    cin >> a;
    if (a == "00:00") break;
   	cout << abs((getHourFromString(a)*60 + getMinuteFromString(a)) - 24*60) << "\n";
  }
}