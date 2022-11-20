#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[5]={1,0,1,0,1};
   
   int start=0;
   int end=4;

   while(start<=end)
   {
    if(arr[start]>=arr[end])
       {
         swap(arr[start],arr[end]);
         start++;
         end--;
       }
    else if(arr[start]==0)
    {
        start++;
    }
    else{
        end--;
    }
   } 
   
   for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<"  ";
   }
}
