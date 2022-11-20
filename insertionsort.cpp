#include <iostream>
using namespace std;

int main()
{
    int arr[7]={10,1,7,4,8,2,11};

    for(int i=1;i<7;i++)
    {
        int temp=arr[i];
        int k=i-1;
        for(;k>=0;k--)
        {
            if(arr[k]>temp)
            {

          arr[k+1]=arr[k];
            }
            else
            {
                break;
            }
        }
        arr[k+1]=temp;
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<"  ";
    }
}