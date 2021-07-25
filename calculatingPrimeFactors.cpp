//  main.cpp
//  codeTest
//
//  Created by Suprabhat Kumar Ravi on 21/03/21.
//

#include <iostream>
using namespace std;
int isprime(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==1)
        cout<<"No Prime Factors";
    else
        cout<<"Prime factors are: ";
    for(int i=2;i<=n;i++)
        if(isprime(i)==1 && n%i==0)
            cout<<i<<"\n";
    return 0;
}
int isprime(int a)
{
    if(a==2 || a==3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(int i=5;i*i<a;i=i+6)
    {
        if(a%i==0 || a%i+2==0)
            return 0;
    }
    return 1;
}
