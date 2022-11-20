#include <iostream>
using namespace std;

int search(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

   int  mid=start+(end-start)/2;
     
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};

    int  f = search(arr,7,2);
     int g = search(arr,7,6);

      cout<<"index of 2 is "<< f<<endl;  
      cout<<"index of 6 is "<< g <<endl;

      return 0;
}
