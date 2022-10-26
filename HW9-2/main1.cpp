#include <iomanip>
#include <iostream>

using namespace std;
void printMatrix(int grade[][8], int row, int column);
int indexSmallestElement(int grade[][8], int row, int column);
int main() {
  const int row = 5;
  const int column = 8;
  int grade[row][column];
  int minVal;
  for (int r = 0; r < row; r++) {

    for (int c = 0; c < 5; c++) {
      cin >> grade[r][c];

      grade[r][5] = (grade[r][1] + grade[r][2] + grade[r][3] + grade[r][4]) / 4;

      grade[r][6] = (grade[r][1] * 0.2) + (grade[r][2] * 0.3) +
                    (grade[r][3] * 0.2) + (grade[r][4] * 0.3);

      minVal = indexSmallestElement(grade, r, column);

      grade[r][7] =
          (grade[r][1] + grade[r][2] + grade[r][3] + grade[r][4] - minVal) / 3;
    }
  }

  printMatrix(grade, row, column);
}
void printMatrix(int grade[][8], int row, int column) {
  for (int r = 0; r < row; r++) {
    for (int c = 0; c < column; c++) {
      cout << setw(8) << grade[r][c];
    }
    cout << endl;
  }
}
int indexSmallestElement(int grade[][8], int r, int column) {
  int minVal = 101; // assume that the smallest value is in the first spot
  column = 5;
  for (int index = 1; index < column; index++) {
    if (grade[r][index] < minVal) {
      minVal = grade[r][index];
    }
  }
  return minVal;
}