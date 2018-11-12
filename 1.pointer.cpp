#include<iostream>
using namespace std;
int main() {
  int k = 3;
  int * p;
  cout << "k = " << k << endl;
  cout << "&k = " << &k << endl;
  cout << "p = " << p << endl;
  p = &k;
  cout << "p = " << p << endl;
  cout << "&p = " << &p << endl;
  cout << "*p = " << *p << endl;
  *p = 42;
  cout << "*p = " << *p << endl;
  cout << "k = " << k << endl;
  // This doesn't work... doesn't compile:
  // cout << "*k = " << *k << endl;
  return 0;
}
