#include <iostream>

using namespace std;

int main()
{
 char op;
 double a, b, ans;


 cin >> a >> b;
 cin >> op;

 switch (op)
 {
 case '+': ans = a + b; break;
 case '-': ans = a - b; break;
 case '*': ans = a * b; break;
 }


 cout << "THE ANSWER = " << ans;
 return 0;
}