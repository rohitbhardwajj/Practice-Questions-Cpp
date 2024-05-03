#include <iostream>
#include <math.h>                       
using namespace std;
int main()
{
     int a,b,c , square , d , root ,e , divide ,eq1 ,eq2;
     cout<<"Enter a : ";
     cin>>a;
     cout<<"Enter b : ";
     cin>>b;
     cout<<"Enter c : ";
     cin>>c;
     
     square = pow(b,2);
     d = 4*a*c;
     e= square-d;
     
     root = sqrt(e);
     divide = 2*a;
     
     eq1 = (-b - root)/divide;
     eq2 = (-b + root)/divide;
     
     cout<<eq1<<endl;
     cout<<eq2<<endl;
     
     
    return 0;
}
