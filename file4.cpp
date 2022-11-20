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
        k/=2;
        ans=k+ans;
        k=k>>1;
    }
    return 0;
 }