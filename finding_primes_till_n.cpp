//  main.cpp
//  PrimeNumbersTillN
//
//  Created by Suprabhat Kumar Ravi on 22/03/21.
//

#include <iostream>
using namespace std;
int isPrime(int);
int main()
{
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(isPrime(i)==1)
        {
            cout<<i<<"\n";
        }
    }
     
    return 0;
}
int isPrime(int x)
{
    if(x==1)
        return 0;
    if(x==2 || x==3)
        return 1;
    if(x%2==0||x%3==0)
        return 0;
    for(int i=5;i*i<=x;i=i+6)
    {
        if(x%i==0||x%i+2==0)
            return 0;
    }
    return 1;
}
