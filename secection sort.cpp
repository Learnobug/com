#include <iostream>
using namespace std;

int main()
{
    int arr[6]={3,7,2,9,1,0};
    
    for(int i=0;i<5;i++)
    {
        int midindex=i;
        for(int j=i+1;j<6;j++)
        {
           if(arr[midindex]>arr[j])
           {
             midindex=j;
           }
        }
        swap(arr[midindex],arr[i]);
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<"  ";
    }
      return 0;
}