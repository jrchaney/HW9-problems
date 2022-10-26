#include <iomanip>
#include <iostream>

using namespace std;
void printMatrix_3col(int AirQuality_Index[][3], int N_ROWS, int N_COLUMNS);
int CountUnhealthySensitive(int AirQuality_Index[][3], int N_ROWS,
                            int city_col);
int meanAirQualityIndex(int AirQuality_Index[][3], int N_ROWS, int city_col);

int main() {
  const int N_ROWS = 10;
  const int N_COLUMNS = 3;

  int AirQuality_Index[N_ROWS][N_COLUMNS] = {
      {50, 68, 58},   {58, 115, 78}, {62, 110, 81}, {66, 124, 110},
      {64, 152, 121}, {46, 143, 90}, {46, 143, 90}, {25, 91, 91},
      {27, 91, 91},   {17, 13, 27}};

  cout << "This is the table of Air Quality in different areas of colorado: "
       << endl;

  printMatrix_3col(AirQuality_Index, N_ROWS, N_COLUMNS);

  int SensitiveCount;
  int city_col;
  int Mean;

  cout << "Enter in a number which corresponds with a city" << endl;
  cout << "(Grand Junction = 0, ";
  cout << "Fort Collins = 1, ";
  cout << "Denver/Boulder = 2)";
  cin >> city_col;
  cout << endl;

  SensitiveCount = CountUnhealthySensitive(AirQuality_Index, N_ROWS, city_col);

  cout << "From 10/4/2020 to 10/13/2020, the air quality was unhealthy" << endl;
  cout << "for sensitive groups in: ";

  if (city_col == 0) {
    cout << "Grand Junction: " << SensitiveCount << "times " << endl;
  } else if (city_col == 1) {
    cout << "Fort Collins: " << SensitiveCount << " times " << endl;
  } else if (city_col == 2) {
    cout << "Denver/Boulder " << SensitiveCount << " times " << endl;
  } else
    cout << "Invalid Input" << endl;

  Mean = meanAirQualityIndex(AirQuality_Index, N_ROWS, city_col);

  cout << "From 10/4/2020 to 10/13/2020, the average air quality in " << endl;

  if (city_col == 0) {
    cout << "Grand Junction was " << Mean << endl;
  } else if (city_col == 1) {
    cout << "Fort Collins was " << Mean << endl;
  } else if (city_col == 2) {
    cout << "Denver/Boulder was " << Mean << endl;
  } else
    cout << "Invalid Input" << endl;
}
void printMatrix_3col(int AirQuality_Index[][3], int N_ROWS, int N_COLUMNS) {
  int row, col;
  for (row = 0; row < N_ROWS; row++) {
    for (col = 0; col < N_COLUMNS; col++)
      cout << setw(6) << AirQuality_Index[row][col] << " ";

    cout << endl;
  }
  return;
}
int CountUnhealthySensitive(int AirQuality_Index[][3], int N_ROWS,
                            int city_col) {
  int count = 0;
  bool AirQuality;
  int row, col;

  for (row = 0; row < N_ROWS; row++) {
    if (AirQuality_Index[row][city_col] >= 101 &&
        AirQuality_Index[row][city_col]) {
      AirQuality = true;
      count++;
    } else
      AirQuality = false;
  }
  return count;
}
int meanAirQualityIndex(int AirQuality_Index[][3], int N_ROWS, int city_col) {
  int sum = 0;
  int row;
  int avg;

  for (row = 0; row < N_ROWS; row++)
    sum = sum + AirQuality_Index[row][city_col];

  avg = sum / N_ROWS;

  return avg;
}