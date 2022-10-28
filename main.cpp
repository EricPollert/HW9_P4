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
  for (c = 0; c < N_COL; c++)
   cout << setw(5) << matrix[r][c];

   cout << endl;

  }
  }



cout << "The air quality was unhealthy for sensitive groups in: " << endl;
  for(city_COL = 0; city_COL < N_COL; city_COL++){
    if(city_COL == 0)
      cout << "Grand Junction: "
           << CountUnhealthySensitive(AirQuality_Index, N_ROWS, city_COL)
           << " times." << endl;
    if(city_COL == 1)
      cout << "Fort Collins: "
           << CountUnhealthySensitive(AirQuality_Index, N_ROWS, city_COL)
           << " times." << endl;
    if(city_COL == 2)
      cout << "Denver - Boulder: "
           << CountUnhealthySensitive(AirQuality_Index, N_ROWS, city_COL)
           << " times." << endl;
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





  int meanAirQualityIndex(int Matrix[][3], int N_ROWS, int city_COL){
    int sum = 0;
    int row, avg;

    for(row = 0; row < N_ROWS; row++)
      sum = sum + Matrix[row][city_COL];

    avg = sum / N_ROWS;

    return avg;
      
  } 
  
