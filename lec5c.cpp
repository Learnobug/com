#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0)
    {
      int bit=n%2;
       if(bit==0)
       { 
         ans=ans+pow(2,i);
       }
       i++;
       n=n/2;
    }
    cout<< ans;
}