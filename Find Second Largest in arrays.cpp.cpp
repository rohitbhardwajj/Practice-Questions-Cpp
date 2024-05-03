#include <iostream>
#include <climits>
using namespace std;


int largest(int arry[] , int size){
     int max = INT_MIN;
     for(int i =0 ; i<size ; i++){
          if(arry[i]>max){
               max=arry[i];
          }
     }return max;
}
int main()
{
     int n;
     cout<<"Enter the size of array : ";
     cin>>n;
    int arry[n];

     for(int i=0 ; i<n ; i++){
          cin>>arry[i];
     }
     
     int larg =largest(arry , n);
     int max = INT_MIN;
     for(int i =0 ; i<n ; i++){
          if(arry[i]!=larg){
          if(arry[i]>max){
               max=arry[i];
          }
          }
          
     }
     cout<<max;
     
     
    return 0;
}
