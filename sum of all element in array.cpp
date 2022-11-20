#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int arr[100];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     
     for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<"  ";
        cout<<endl;
     }
    int sum=0;
    for(int i=0;i<size;i++)
     {
        sum +=arr[i];
        cout<<endl;
     }
     cout<<"sum of all elments of array is "<< sum <<endl;

     return 0;
}
