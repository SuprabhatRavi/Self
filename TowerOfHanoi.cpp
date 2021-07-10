//displays steps for tower of hanoi through recursion


#include <iostream>
using namespace std;

void TowerOfHanoi(int n,char a, char b,char c)
{
    if(n==1)
    {
        cout<<"shift "<<n<<" from "<<a<<" to "<<c<<"\n";
        return;
    }
    TowerOfHanoi(n-1,a,c,b);
    cout<<"shift "<<n<<" from "<<a<<" to "<<c<<"\n";
    TowerOfHanoi(n-1,b,a,c);
}




int main() {
	int n=2;
	char a='A',b='B',c='C';
	TowerOfHanoi(n,a,b,c);
	return 0;
}
