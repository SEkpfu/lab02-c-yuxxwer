#include <iostream>
 #include <cmath>

 using namespace std;


 int main() {

  double a, b, c;
  cin >> a >> b >> c;
  


  double x, y, z;

  x = max(max(a, b), c);
  z = min(min(a, b), c);
  y = a + b + c - x - z;

  if (x < z + y && z > 0) {
   cout << "EXIST\n";

   if (abs(x * x - (y * y + z * z)) < 1e-6) {
    cout << "90 degrees\n";
   }
   if (abs(x - y) < 1e-6 && abs(y - z) < 1e-6) {
    cout << "Equals sizes";
   }
   else {
    if (abs(x - y) < 1e-6 || abs(y - z) < 1e-6) {
     cout << "Equals bedra";
    }
   }


  }
  else {
   cout << "NOT exist";
  }

  
 }