#include <iostream>
using namespace std;

int main()
{
    int arry[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9},
    };
    int top=0 , bottom=2 , left=0 , right=2;

    
         
         //top row;
         for(int i=left ; i<=right ; i++){
              cout<<arry[top][i];
                
              }  
              top++;
          //right coloum;
         
          for(int i=top ; i<=bottom ; i++){
              cout<<arry[i][right];
                
              } 
              right--;
           
            for(int i=right ; i>=left ; i--){
              cout<<arry[bottom][i];
                
              }  
              bottom--;
              
              
            for(int i=bottom ; i>=top ; i--){
              cout<<arry[i][left];
                
              }  
              left++;
            for(int i=left ; i>=right ; i--){
              cout<<arry[right][i];
                
              }  
              
              
              







    return 0;
}
