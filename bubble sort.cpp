#include <iostream>
using namespace std;

int main()
{
  int arr[4]={7,5,4,8};

  for(int i=1;i<4;i++)
  {
    for(int j=0;j<3-i;j++)
    {
        if(arr[j]<arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
  }
}