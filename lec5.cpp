#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int pro=1;
    cin>>n;
    while(n!=0)
    {
        int rem=n%10;
        sum +=rem;
        pro *=rem;
        n=n/10;
    }
    cout<< "sum is " << sum  <<"  product is "<< pro<< "  "; 
}