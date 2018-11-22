#include <iostream>
#include <climits>
using namespace std;



int stringLength(char* inputString)
{
    int sizeString = 0;
    while (*inputString++)
    {
        sizeString++;
    }
    return sizeString;
}




bool isPalindrome(char* s, int size)
{
 int sizeIndex = --size;
 int isPalindrome = 0;
 char* compString = new char[size];
 
 for (int i = 0; i < size; i++) 
    {
        compString[i] = s[i];
    }
 int j = 0;
 for(int i = sizeIndex; i >= 0; i--) 
 {
     if(s[i] == compString[j]) 
     {
         isPalindrome++;
         j++;
     }
     else
     {
         j++;
     }
     
 }
 
 
  delete [] compString;
  
  return (isPalindrome == size) ? true : false;

 
}


int main()
{
    int maxSize = 100000;
    char* maxString = new char[maxSize];

    cout<<"Enter in your string"<<endl;
    
    cin.get( maxString, maxSize );    
    
    int sizeString  = stringLength(maxString);
    

    char* actString = new char[sizeString];
    
    
    for (int i = 0; i < sizeString; i++) 
    {
        actString[i] = maxString[i];
    }
    
    delete [] maxString;
    
   (isPalindrome(actString,sizeString)) ? cout<<"Yes" : cout<<"No";
   
    delete [] actString;
                                                                                                
   
   return 0;
}