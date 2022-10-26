#include <iostream>
#include <iomanip>

using namespace std;
void printMatrix(int grade[][8], int row, int column);
int indexSmallestElement(int grade[][8], int row, int column);
int main(){
  const int row = 5;
  const int column = 8;
  int grade[row][column];

  for (int r = 0; r < 5; r++){

    for(int c = 0; c < row; c++){
      cin >> grade[r][c];

    grade[r][5] = (grade[r][1] + grade[r][2] + grade[r][3]+ grade[r][4])/4;

    grade[r][6] = (grade[r][1] * 0.2) + (grade[r][2] * 0.3) + (grade[r][3] * 0.2) + (grade[r][4] * 0.3);
    }
  }


  indexSmallestElement(grade, row, column);
  printMatrix(grade, row, column);
  
  
}
void printMatrix(int grade[][8], int row, int column){
for (int r = 0; r < row; r++){
    for (int c = 0; c < column; c++){
      cout << setw(8) << grade[r][c];
    }
    cout << endl;
  }
  }
int indexSmallestElement(int grade[][8], int row, int column){
  int minIndex = 101; //assume that the smallest value is in the first spot
  column = 5;
  for (int r = 0; r < row; r++){
  for (int index = 1; index < column; index++){
    if (grade[r][minIndex] > grade[r][index]){
      minIndex = index;
      grade[r][minIndex] = 0;
      grade[r][7] = (grade[r][1] + grade[r][2] + grade[r][3]+ grade[r][4])/3;
    }
  }
  }
  return 0;
  }