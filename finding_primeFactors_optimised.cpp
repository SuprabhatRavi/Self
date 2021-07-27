#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n<=1)
        cout<<"No Prime Factors";
    while(n%2==0)
    {
        cout<<2<<"\n";
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<3<<"\n";
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<"\n";
            n=n/i;
        }
        while(n%i+2==0)
        {
            cout<<i+2<<"\n";
            n=n/i+2;
        }
    }
    if(n>1)
        cout<<n<<"\n";
}
