#include <iostream>
#include <array>
using namespace std;

int main()
{
  int basic[3]={1,2,3};
   array<int,4> a={1,2,3,4};

   int size=a.size();
    
    cout<<"element at 2nd index is "<< a.at(2)<<endl;
   cout<<"first element "<<a.front()<<endl;
  cout<<"empty or not "<<a.empty()<<endl;
  cout<<"last element is "<<a.back()<<endl;
  
}