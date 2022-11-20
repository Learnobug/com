#include <iostream>
using namespace std;
 
 int peak(int arr[],int size)
 {
    int s=0,e=size-1;
    int ans=0;
    int mid=(s+e)/2;
   
   while(s<e)
   {
      if(arr[mid]<arr[mid+1])
      {
          s=mid+1;
      }
      else if(arr[mid]>arr[mid+1])
      {
         e=mid;
      }
      mid=(s+e)/2;
   }
  return s;
 }


 int main()
 {
   int arr[4]={0,2,1,0};

   cout<<"index of peak element "<<peak(arr,4)<<endl;

return 0;
 }
