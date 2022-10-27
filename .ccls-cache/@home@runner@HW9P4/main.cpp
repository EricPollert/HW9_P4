// John Thompson and Jake Thompson helped me work through the parts of the handout I was able to complete


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COL);
int meanAirQuality_Index(int matrix [][3], int N_ROWS, int city_COL);
int CountUnhealthySensitive(int matrix[][3], int N_ROWS, int city_COL);

int main() {

  int city_COL;
  const int N_COL = 3;
  const int N_ROWS = 10;
  int AirQuality_Index[N_ROWS][N_COL] = { {50, 68, 58},
                                          {58, 115, 78},
                                          {62, 110, 81},
                                          {66, 124, 110},
                                          {64, 152, 121},
                                          {46, 143, 90},
                                          {46, 143, 90},
                                          {25, 91, 91},
                                          {27, 19, 59},
                                          {17, 13, 27} };
  


printMatrix_3col(AirQuality_Index, N_ROWS, N_COL);

  


  }


void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COL){
int r, c;
  for (r = 0; r < N_ROWS; r++){
  for (c = 0; c < N_COL; c++){
   cout << setw(5) << matrix[r][c];

   cout << endl;

  }
  }
  }

int CountUnhealthySensitive(int matrix[][3], int N_ROWS, int city_COL){

  int count = 0;
  int unhealthy_level = 101;
  int row;

  for (row = 0; row < N_ROWS; row++){
    if (matrix[row][city_COL] >= unhealthy_level)
      count++;
  }
  return count;
}

  
  /*int meanAirQualityIndex(int Matrix[][3], int N_ROWS, int city_COL){
    int sum = 0
    int r, average;

    for(r = 0; r < N_ROWS; r++)
      
  } */
  
