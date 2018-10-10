/**
 * A class example about pointer, reference (alias)
 * By TC
 */
#include<iostream>
using namespace std;

void timestwo(double);
void timestwo_old(double *);
void timestwo_ref(double &);

int main() {
  double num = 21;
  
  cout << num << endl;
  
  // Pass by value
  timestwo(num);
  cout << num << endl;

  // Pass by pointer (still a form of pass by value)
  timestwo_old(&num);
  cout << num << endl;

  // Pass by reference
  timestwo_ref(num);
  cout << num << endl;

  return 0;
}

void timestwo(double number) {
  number *= 2;
}

void timestwo_old(double * number) {
  *number *= 2;
}

void timestwo_ref(double & number) {
  number *= 2;
}
