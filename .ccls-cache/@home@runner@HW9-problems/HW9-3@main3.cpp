#include <iostream>

using namespace std;

int main(){

  char test[6][6] = {{'T', 'F', 'T', 'T', 'T'},{'T', 'T', 'T', 'T', 'T'}, {'T', 'T', 'F', 'F', 'T'}, {'F', 'T', 'F', 'F', 'F'}, {'F', 'F', 'F', 'F', 'F'}, {'T', 'T', 'F', 'T', 'F'}};

  int count[6][1] = {0};
 for (int r = 0; r < 6; r++ ){
   
  if (test[r][0] == 'T'){
    count[r][0] = count[r][0] + 5;
  }
   
  if (test[r][1] == 'T'){
    count[r][0] = count[r][0] + 5;
  }
   
  if (test[r][2] == 'F'){
    count[r][0] = count[r][0] + 5;
  }
   
  if (test[r][3] == 'F'){
    count[r][0] = count[r][0] + 5;
  }
  if (test[r][4] == 'T'){
    count[r][0] = count[r][0] + 5;
  }
}

  int grade[5] = {0};

  for (int i = 0; i < 5; i++){
    grade[i] = count[i][0];
    cout << "The grade for Test "<< i+1 << " is " << grade[i] << " ";

    cout << endl;
  }
  
}