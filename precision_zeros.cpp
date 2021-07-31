#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int i=30;
    float t=80.00;
    //cin>>i;
    //cin>>t;
    cout << fixed << setprecision(2);
    if(i>t) {
        cout<<t;
        return 0;
    }
     if(i%5==0) cout<<t-i-0.5;
     else 
     cout<<t;
	
	return 0;
}