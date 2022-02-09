#include<iostream>
using namespace std;


int setbit(int n)
{
    int c=0;
    while(n!=0)
    {
        if(n&1==1)
        {
           c++;
        }
        n=n>>1;
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c1=setbit(a);
    int c2=setbit(b);

    cout<<c1<<" "<<c2<<endl;
}

