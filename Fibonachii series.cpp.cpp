#include <iostream>
using namespace std;

int main()
{
    int a=0,b=1,n,fibo;
    cout<<"Enter the numbr : ";
    cin>>n;
    cout<<a<<b;
     for(int i=0 ; i<n ; i++){
         fibo= a+b;
         cout<<fibo;
         a=b;
         b=fibo;
          
     }
    return 0;
}
