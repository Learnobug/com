#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
int nextnum=0;
int x=0,y=1;
int count=0;
    while(nextnum<=n)
    {
        cout<< nextnum <<" ";
        x=y;
        y=nextnum;
        nextnum=x+y;
        count++;
    }
}