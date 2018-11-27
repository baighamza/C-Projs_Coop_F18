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
          
          for(int x = firstIndex; x <= size; x++)
          {
              //first row
              if(i < 0)
              {
                  i = otherSide;
                  magicSquare[i][x] = num;
                  i--;
                  num++;
                  break;
                  
              }
              if (x > otherSide)
              {
                  x = 0;
                  magicSquare[i][x] = num;
                  i--;
                  num++;
                  break;
              }
              if(magicSquare[i][x] != 0)
              {
                  i++;
                  magicSquare[i][x] = num;
                  num++;
                  break;
              }
              else
              {
                  magicSquare[i][x] = num;
                  num++;
                  i--;
                  break;
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
