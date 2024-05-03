#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the size of a array : ";
   cin>>n;
   int arry[n];
   
   
   
   //for taking arrays values
   for(int i=0 ; i<n ; i++){
        cin>>arry[i];
   }
   int x;
   cout<<"Enter the number :";
   cin>>x;
   int count;
   for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<=n ; j++){
              for(int k=j+1 ; k<=n ; k++){
             if(arry[i]+arry[j]+arry[k]==x){
                  count++;
             }
             }
        }
   }  cout<<count;
   
   
   
   
   
   
    return 0;
}
