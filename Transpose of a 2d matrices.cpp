#include <iostream>
using namespace std;

int main()
{
     int r1,c1;
     cout<<"Enter size of 1st matrices : ";
     cin>>r1;
     cin>>c1;
    int m1[r1][c1];
    
    for(int i=0 ; i<r1 ; i++){
         for(int j=0 ; j<c1 ; j++){
              cin>>m1[i][j];
         }
    }
    
    int tmatx[r1][c1];
    for(int i=0 ; i<r1 ; i++){
         for(int j=0 ; j<=c1 ; j++){
              tmatx[i][j]= m1[j][i];
         }
    }
      for(int i=0 ; i<r1 ; i++){
         for(int j=0 ; j<c1 ; j++){
              cout<<tmatx[i][j]<<" ";
         }
         cout<<"\n";
    }
  
    
    
    
    
}
