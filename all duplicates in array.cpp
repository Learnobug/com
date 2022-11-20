#include <iostream>
using namespace std;

void sort(int arr[],int size)
{

    for(int i=0;i+1<size;i++)
    {
      for(int j=i+1;j<size;j++)
      {
         if(arr[i]>arr[j])
         {
            swap(arr[i],arr[j]);
         }
      }
    }
}

int main()
{
    int arr[6]={1,2,2,1,1,3};

    sort(arr,6);

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]=arr[i+1])
        {
            cout<<arr[i]<<"  ";
            i=i+2;
        }
    }
}