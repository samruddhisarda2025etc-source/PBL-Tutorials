#include <iostream>
using namespace std;
int fact(int p)
{
    int res=1;
    for (int i=p;i>1;i--)
    {
        res*=i;
    }
    return res;
}
int BinoCoef(int n, int r)
{
    int Coef;
    Coef=fact(n)/(fact(r)*fact(n-r));
    return Coef;
}
void printpascal(int k)
{
    for (int i=0;i<k;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<"\t"<<BinoCoef(i,j);
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
   printpascal(n);
    return 0;
}
