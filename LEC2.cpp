#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;

    if(a>'A'&& a<'Z')
    {
        cout<<"this is upper case ";
    } 
    else if(a>'a'&&a<'z')
    {
        cout<<"this is lower case ";
    }
    else
    {
      cout<<"this is number";
    }
    return 0;
}