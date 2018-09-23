#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
  int col, row;
  int spacesz;

  // Input the desired rows and columns 
  cin >> hex >> row >> col;

  // Adjust the pace to display the numbers
  // if (col * row > pow(2, 16) - 1) {
  //  spacesz = 9; 
  // }
  // else {
  //   spacesz = 5;
  // }
  spacesz = ceil(log2(row * col + 1) / 4) + 1;

  // Arrange the multiplication table
  for (int i = 1; i <= row + 1; ++i) {
    if (i == 1) {
      for  (int j = 1; j <= col + 1; ++j) {
        if (j == 1) {
          cout << setw(spacesz) << '*';
        }  
        else {
          cout << uppercase << setw(spacesz) << hex << (j - 1);
        }
      }
      cout << endl;
    }
    else {
      for (int j = 1; j <= col + 1; ++j) {
        if (j == 1) {
          cout << setw(spacesz) << (i - 1);
        }
        else {
          cout << setw(spacesz) << (i - 1) * (j - 1);
        }
      }
      cout << endl;
    }
  }  
  return 0;
}
