#include <iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0,e=n-1;
    int ans=0;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[0]<=arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binary(int arr[],int s,int e,int k)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
 return -1;
}
int main()
{
   int arr[5]={7,9,1,2,3};
   int k;
   cin>>k;

   int getpi=pivot(arr,5);
   
    if(arr[getpi]<=k &&k<=arr[4])
    {
        cout<< binary(arr,getpi,4,k);
    }
    else{
        cout<<binary(arr,0,getpi-1,k);
    }

}