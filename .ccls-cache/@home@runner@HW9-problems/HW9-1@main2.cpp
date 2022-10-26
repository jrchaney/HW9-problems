#include <iostream>
#include <iomanip>

using namespace std;
void printMatrix(int grade[][7], int row, int column);
int main(){
  const int row = 5;
  const int column = 7;
  int grade[row][column];

  cout << "Enter grades for students 1 through 5" << endl;
  for (int r = 0; r < 5; r++){

    for(int c = 0; c < row; c++){
      cin >> grade[r][c];

    grade[r][5] = (grade[r][1] + grade[r][2] + grade[r][3]+ grade[r][4])/4;

    grade[r][6] = (grade[r][1] * 0.2) + (grade[r][2] * 0.3) + (grade[r][3] * 0.2) + (grade[r][4] * 0.3);
    }
  }


  printMatrix(grade, row, column);
  
  
}
void printMatrix(int grade[][7], int row, int column){
for (int r = 0; r < row; r++){
    for (int c = 0; c < column; c++){
      cout << setw(8) << grade[r][c];
    }
    cout << endl;
  }
  }