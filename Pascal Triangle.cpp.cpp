#include <iostream>

using namespace std;

int  calulate(int a){
     int factorial = 1;
     for(int i =1 ; i<= a ; i++){
          factorial*=i;
     }
     return factorial;
}
     
     int fact(int i , int j){
             int a = calulate(i);
             int b = calulate(j);
             int c = calulate(i-j);
             return a / (b * c);
     }
       

int main()
{
     
     int n,r;
     cout<<"Enter i number : ";
     cin>>n;
     cout<<"Enter c number : ";
     cin>>r;
     for(int i = 0 ; i<=n ; i++){
          for(int j = 0 ; j <=i ; j ++){
               cout<<fact(i,j)<<"  ";
          }
          
          
          cout<<endl;
     }
  
     
    
     
    return 0;
}
