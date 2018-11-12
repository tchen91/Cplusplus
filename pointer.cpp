/**
 * Basic about the pointer
 */
#include<iostream>
using namespace std;

int main() {
  int k = 3;
  int * p;
 
  cout << "k = " << k << endl;
 
  // & is to take the address
  cout << "&k = " << &k << endl;
 
  // p will be assigned with a random address
  cout << "p = " << p << endl;
 
  // p is assigned with the address of the integer k
  p = &k;
 
  cout << "p = " << p << endl;
 
  // Take the address of a pointer
  cout << "&p = " << &p << endl;
 
  // * is to dereferece a pointer, to get the value stored in the address
  cout << "*p = " << *p << endl;
 
  // Modify the value stored in the address
  *p = 42;
  cout << "*p = " << *p << endl;
 
  cout << "k = " << k << endl;
 
  // This doesn't work... doesn't compile:
  // cout << "*k = " << *k << endl;
 
  return 0;
}
