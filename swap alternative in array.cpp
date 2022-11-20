#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};

    int start=0;
    int next=1;
    
    while(next<5)
    {
       swap(arr[start],arr[next]);
         start=start+2;
         next=next+2;
    }
    for (int i = 0; i <5;i++)
    {
       cout<<arr[i]<<"  ";
    } 
    
}