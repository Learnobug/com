#include <iostream>
using namespace std;



int first(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
         if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
       {
        start=mid+1;
       }
        else
        {
            end=mid-1;
        }

     mid=start+(end-start)/2;
     }
 return ans;
}

int last(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;

    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
      if (arr[mid]==key)
      {
         ans=mid;
         start=mid+1;
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
    return ans;
}

int main()
{
    int arr[5]={1,2,3,3,5};
 
 cout<<"everything is fine "<<endl;
    
    cout<<"index of first no. is "<< first(arr,5,3) <<endl;
    cout<<"index of last bit is "  << last(arr,5,3) << endl;

    return 0;

}