//  main.cpp
//  Calculating Exponents
//
//  Created by Suprabhat Kumar Ravi on 23/03/21.
//

#include <iostream>
using  namespace std;
int CalcuPower(int n,int x)
{
    if(x==0)
        return 1;
    int value=CalcuPower(n,x/2);
    value=value*value;
    if(x%2==0)
        return value;
    else
        return value*n;
}
int main()
{
    int n,x;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"enter the power: ";
    cin>>x;
    cout<<"The Value is: "<<CalcuPower(n,x)<<endl;
    
    return 0;
}
