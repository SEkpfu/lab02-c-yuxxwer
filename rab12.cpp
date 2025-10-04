#include <iostream>
 #include <cmath>

 using namespace std;

 

 int main() {
  setlocale(0, "rus");
  

  int a, b, c;


  cin >> a >> b >> c;
  int summa = 0;
  int even = 0;
  if (a > 10) {
   summa += a;
  }

  if (b > 10) {
   summa += b;
  }
  if (c > 10) {
   summa += c;
  }

  even = (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0);

  int x, y, z;
  x = max(a, max(b, c));
  z = min(a, min(b, c));
  y = a + b + c - x - z;

  cout << "SUMMA: ";
  cout << summa;
  cout << "\nCOUNT OF EVEN: " << even << "\nMIDDLE: " << y << '\n' << "NUMBER OF LEAST: ";
  
  if (z == a) {
   cout << 1;
  }
  else {
   if (z == b) {
    cout << 2;
   }
   else {
    cout << 3;
   }
  }
 }