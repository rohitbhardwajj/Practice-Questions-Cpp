#include <iostream>

using namespace std;

int main()
{
   int x , y;
   cout<<"Enter a : ";
   cin>>x;
   cout<<"Enter b : ";
   cin>>y;
   
   cout<<x <<y <<endl;
   x=x*y;
   y=x/y;
   x=x/y;
   cout<<x<<y;

    return 0;
}
