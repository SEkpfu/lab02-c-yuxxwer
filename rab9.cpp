#include <iostream>
#include <cmath>


using namespace std;


int main() {

 double x, y;
 cin >> x >> y;
 if (x >= -2 && x <= 0 && y >= 0 && y <= 1) {
  cout << "a) yes";
 }
 else {
  cout << "a) not";
 }

 cout << endl;

 double hyp = sqrt(x * x + y * y);
 if (hyp <= 5 && y >= 0) {
  cout << "b) yes";
 }
 else {
  cout << "b) not";
 }

 cout << endl;


 if (hyp <= 6 && hyp >= 3 && x >= 0) {
  cout << "c) yes";
 }
 else {
  cout << "c) not";
 }

 cout << endl;

 if (x >= 0 && y >= 0 && -2 * x + 2 >= y) {
  cout << "d) yes";
 }
 else {
  cout << "d) not";
 }

 cout << endl;
}