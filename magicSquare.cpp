// Example program
#include <iostream>
#include <string>
#include <climits>

using namespace std;

void oddArray(int** magicSquare, int size)
{
    for(int j = 0; j < size; j++)
  {
      for(int k = 0; k < size; k++)
      {
          magicSquare[j][k] = 0;
      }
      
  }
  //[row][column]
  int firstIndex = size/2;
  int otherSide = size/2 + 1;
  int num = 1;
  int i = 0;
  int oldPositionRow,oldPositionCol;
          
          for(int x = firstIndex; x <= size; x++)
          {
              //first row
              if(i < 0)
              {
                
                  i = otherSide;
                  oldPositionRow = i;
                  oldPositionCol = x;
                  magicSquare[i][x] = num;
                  i--;
                  num++;
                  
              }
              else if (x > otherSide)
              {
                  oldPositionRow = i;
                  x = 0;
                  oldPositionCol = x;
                  magicSquare[i][x] = num;
                  i--;
                  num++;
                 
              }
              else if(magicSquare[i][x] != 0)
              {
                  i = oldPositionRow;
                  x = oldPositionCol;
                  i++;
                  //x--;
                  magicSquare[i][x] = num;
                  num++;
              }
              else
              {
                  oldPositionRow = i;
                  oldPositionCol = x;
                  magicSquare[i][x] = num;
                  num++;
                  i--;
              }
          }
      

  
  
  
}

int main()
{
    
  int maxSize;
  cout<<"Enter in size of magicSquare array"<<endl;
  cin>>maxSize;
  int** magicSquare = new int*[maxSize];
  
  for(int i = 0; i < maxSize; ++i)
    magicSquare[i] = new int[maxSize];
  
  
  if(maxSize%2 == 1)
  {
      oddArray(magicSquare,maxSize);
  }
  
      for (int i = 0; i < maxSize; ++i)
    {
        for (int j = 0; j < maxSize; ++j)
        {
            std::cout << magicSquare[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    
    //delete [][] magicSquare;
  
}
