

#include <iostream>
using namespace std;

void swap(int* a , int* b){
     int temp =*a;
     *a=*b;
     *b=temp;
      
     
}

int main()
{
     int a;
     cout<<"Enter a : ";
     cin>>a;
     int b;
     cout<<"Enter b : ";
     cin>>b;
     swap(&a,&b);
    cout<<a <<" "<<b;

    return 0;
}

