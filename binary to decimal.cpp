
#include <iostream>

using namespace std;

 int binaryToDecimal(int a){
      int power=1;
      int result=0;
      while(a>0){
           
           int y=a%10;
           result+=power*y;
           power*=2;
           a/=10;
      }
      return result;
      
 }

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   cout<< binaryToDecimal(n);

    return 0;
}

