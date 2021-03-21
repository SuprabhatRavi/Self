//  main.cpp
//  FindingPrimeFactors (Optmised)
//
//  Created by Suprabhat Kumar Ravi on 21/03/21.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n<=1)
        cout<<"No Prime Factors";
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<"\n";
            n=n/i;
        }
    }
    if(n>1)
        cout<<n<<"\n";
}
