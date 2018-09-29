#include<iostream>
using namespace std;

// Prototype
unsigned long factorial(unsigned long);

int main() {
  int num;
  cin >> num;
  cout << factorial(num) << endl;
  return 0;
}

unsigned long factorial(unsigned long number) {
  // Base Case.
  if (number == 0) {
    return 1;
  }
  // Recursive Step.
  return number * factorial(number - 1);
}

