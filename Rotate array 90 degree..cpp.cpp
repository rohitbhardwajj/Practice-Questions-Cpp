#include <iostream>
#include <climits>
using namespace std;

int main()
{  
  
    int arry[3][3] = {{1, 2, 3 },
                      {4, 5, 6},
                      {7, 8, 9}};
                      
                      
     int i,j;          
   for(int i=0 ; i<=2 ; i++){
        for(int j=0 ; j<=2 ; j++){
             cout<<arry[j][i]<<" ";
        }
        
        cout<<"\n";
   }
   
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j >= 0; j--) {
            cout << arry[j][i] << " ";
        }
        cout << endl;
    }
      
                      
                      
                      
                      
}

