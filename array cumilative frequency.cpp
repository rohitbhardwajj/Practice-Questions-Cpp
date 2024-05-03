#include <iostream>
using namespace std;

int main()
{
    int arry[8] = {1,2,3,4,5,6,7,8};
    int temp = arry[0];
    int i;
    for(int i=1 ; i<8 ; i++){
          temp= temp+arry[i];
          arry[i]=temp;
    }


     for(int i=0 ; i<=7 ; i++){
          cout<<arry[i]<<"  ";
     }
    return 0;
}
