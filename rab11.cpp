#include <iostream>
 #include <cmath>

 using namespace std;


 int main() {
  setlocale(0, "rus");
  int d, m, y; // birth
  int dd, mm, yy; // current
 

  cin >> d >> m >> y;
  cin >> dd >> mm >> yy;

  int ans = yy - y - 1;
  if (mm > m) {
   ans += 1;
  }
  else {
   if (mm == m) {
    if (dd >= d) {
     ans += 1;
    }
   }
  }
  cout << "Вам " << ans;
  if (ans == 0) {
   cout << " лет";
  }
  else {
   if (ans == 1) {
    cout << " год";
   }
   else {
    if (ans >= 2 && ans <= 4) {
     cout << " годa";
    }
    else {
     cout << " лет";
    }
   }
  }
 }