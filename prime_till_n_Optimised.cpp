//  main.cpp
//  PrimeTillN(Vector)
//
//  Created by Suprabhat Kumar Ravi on 23/03/21.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    vector<int> isPrime(n+1,1);
    for(int i=2; i*i<= isPrime.size();i++)
    {
        if(isPrime[i]==1)
        {
            for(int j=2;j*i<=n;j++)
            {
                isPrime[j*i]=0;
            }
        }
    }
    for(int i=2;i<isPrime.size();i++)
    {
        if(isPrime[i])
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
