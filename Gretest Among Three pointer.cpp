#include <iostream>
using namespace std;

int* greatest(int* a, int* b , int*c){
     int* d=nullptr;
     if(*a!=*b && *b!=*a && *b!=*c && *b!=*a && *c!=*a && *c!=*b){
    if(*a>=*b && *a>=*c){
         return a;
    }else if(*b>=*a && *b>=*c){
         return b;
    }else{
         return c;
    }
     }else{
          return d;
     }
     
}

int main()
{
    
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    
    int* result_s = greatest(&a,&b,&c);
   
    if(result_s!=nullptr){
         cout << "The greatest number is: " << *result_s << endl;
    cout << "The greatest number address is: " << result_s << endl;
    }else{
         cout<<"invalid";
    }

    return 0;
}

