#include <iostream>
#include <cmath>


using namespace std;


int main() {
 
 double a, b;
 cin >> a >> b;

 int count = 0;
 double hyp = sqrt(a * a + b * b);
 if (hyp <= 2) {
  count = 10;
 }
 else {
  if (hyp <= 4) {
   count = 5;
  }
 }
 
 cout << "SCORE: " << count;
return 0;
}