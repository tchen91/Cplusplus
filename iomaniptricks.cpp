#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
  cout << setprecision(13) << M_PI << endl;
  cout << setprecision(7) << M_PI << endl;
  cout << fixed << 3.14 << endl;
  cout << setw(15) << setfill('~')  << 3.14 << endl;
  cout << setw(15) << showpos << left << setfill('~')  << 3.14 << endl;
  cout << setw(15) << right << setfill(' ')  << -3.14 << endl;
  cout << setw(15) << internal << -3.14 << endl;
  cout << setw(15) << 3.14 << endl;
  cout << setw(15) << 3.14 << endl;
  cout << 8675309 << endl;
  cout << scientific << 8675309. << endl;
  cout << fixed << (int)8675309. << endl;
  cout << 45 << endl;
  cout << hex << 45 << endl;
  cout << uppercase << showbase << 45 << endl;

  return 0;
}
