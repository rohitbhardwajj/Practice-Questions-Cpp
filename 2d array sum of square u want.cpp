#include <iostream>
using namespace std;

int main()
{
   int arry[3][3] = {{1,2,3},{4,2,1},{5,5,2}};    //123
                                                  //421
                                                  //552


int c1,r1,c2,r2,sum=0;
cout<<"Enter the starting point of array : ";
cin>>r1>>c1>>r2>>c2;

  for(int i =r1 ; i<=r2 ; i++){
       for(int j=c1 ; j<=c2 ; j++){
            sum+=arry[i][j];
       }
  }
  cout<<sum;






    return 0;
}

