//  Created by Suprabhat Kumar Ravi on 22/03/21.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
            cout<<i<<"\n";
    }
    for(;i>0;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<"\n";
        }
    }
    
    return 0;
}
