#include <iostream>
 #include <cmath>

 using namespace std;

 bool check(double x, double y, double z) {
  return x + y > z;
 }

 int main() {

  double a, b, c;
  cin >> a >> b >> c;
  if (check(a, b, c) && check(a, c, b) && check(b, c, a)) {
   cout << "EXIST";
  }
  else {
   cout << "NOT exist";
  }

  
 }