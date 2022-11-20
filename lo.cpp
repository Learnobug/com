#include<iostream>
#include<math.h>
 using namespace std;
 int main()
 {
        int ans=0,n=0,i=0,k=0;
        cout<<"enter the no."<<endl;
        cin>>n;
        while(n!=0)
    {
        k=n%2;
        n/=2; 
        ans=ans*10+k;
        i++;
    }
    cout<<ans;
 }

