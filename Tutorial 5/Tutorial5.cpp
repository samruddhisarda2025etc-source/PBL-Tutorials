#include <iostream>
using namespace std;
float add (float i,float j, float k)
{
    return (i+j+k);
}
int add (int a, int b)
{
    return (a+b);
}
int add(float m,float n)
{
return (m+n);
}
int main()
{
   int a,b;
   float m,n;
   float i,j,k;
   cout<<"Enter two integers:";
   cin>>a>>b;
   cout<<"Addition ="<<add(a,b)<<endl;
   cout<<"Enter two float:";
   cin>>m>>n;
   cout<<"Addition ="<<add(m,n)<<endl;
   cout<<"Enter three float:";
   cin>>i>>j>>k;
   cout<<"Addition ="<<add(i,j,k)<<endl;
   
    return 0;
}
