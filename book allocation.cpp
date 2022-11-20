#include <iostream>
using namespace std;

bool issposible(int arr[],int n,int m,int mid)
{
  int studentcount=1;
  int pagesum=0;
  for(int i=0;i<n;i++)
 {

  if (pagesum+arr[i]<=mid)
  {
     pagesum+=arr[i];
  }
  else
  {
    studentcount++;
     if(studentcount>m||arr[i]>mid)
     {
        return false;
     } 
     pagesum=arr[i];
  }
}
return true;
}
int main()
{
    int arr[5]={10,20,30,40,50};
    
    int s=0;
    int e=0;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    e=sum;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(issposible(arr,5,2,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    cout<<ans;
  return 0;
}
