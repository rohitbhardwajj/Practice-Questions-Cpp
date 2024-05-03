
#include <iostream>

using namespace std;

int main()
{
    int a,c;
    cout<<"ENter a number : "; //row
    cin>>a;
    cout<<"ENter c number : "; //col
    cin>>c;
    
    for(int i = 1 ; i<=a ; i++){
         for(int j = 1 ; j<=c ; j++){
              if((i+j)%4==0 || (i==2&&j%4==0)){
              cout<<"*";
              
              }else cout<<" ";
              
         }
         
         
         
         
         
         cout<<endl;
    }
    return 0;
}
