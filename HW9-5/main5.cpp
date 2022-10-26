#include <iostream>
#include <cmath>
using namespace std;
double adjoint(double matrix[][2], double detA[][1], int r, int c);
int main(){

  double matrix[2][2];
// take in matrix
  for (int r = 0; r < 2; r++){
    for(int c = 0; c < 2; c++){
      cin >> matrix[r][c];
      
    }
  }
  


  
  
  double detA[1][1] = {0};
  
  detA[0][0] = (matrix[0][0]*matrix[1][1]) - (matrix[0][1]*matrix[1][0]);


  //cout << detA[0][0];
  
  if (detA[0][0] != 0){
    for (int r = 0; r < 2; r++){
    for(int c = 0; c < 2; c++){
      matrix[r][c] = adjoint(matrix,detA, r, c);
      //cout << matrix[r][c] << " " << endl;
      }
    }
    cout << matrix[0][0] << " " << matrix[0][1] << endl;
    cout << matrix[1][0] << " " << matrix[1][1] << endl;
  }
    


 
  else
    cout << "Cannot take the inverse because the determinant is 0" << endl;
}



double adjoint(double matrix[][2], double detA[][1], int r, int c){
  double inv = 0;
  inv = matrix[r][c] * (1/detA[0][0]);
  
  return inv;
}