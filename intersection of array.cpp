#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[6]={1,2,2,2,3,4};
    int brr[4]={2,2,3,3};
     
     int i=0,j=0;
    while( i<6 && j<4)
    {
      if (arr[i]<brr[j])
      {
        i++;
      }
      else if(arr[i]==brr[j])
      {
        cout<<arr[i]<<" ";
        i++;
        j++;
      }
      else
      {
        j++;
      }
    }
}
