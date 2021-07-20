// Quick sort using Lomuto partation

#include <iostream>
#include<algorithm>
using namespace std;

int Partation(int arr[],int l,int h)
{
    int i=l, p=h;
    
    while(l<h)
    {
        if(arr[l]<arr[p])
        {
            swap(arr[i++],arr[l++]);
        }
        else l++;
    }
    swap(arr[i],arr[p]);
    return i;
}


void Qsort(int arr[],int l, int h)
{
    if(l<h)
    {
        int p=Partation(arr,l,h);
        Qsort(arr,l,p-1);
        Qsort(arr,p+1,h);
    }
}


int main() {
	int arr[]={70,60,50,30};
	int n= sizeof(arr)/sizeof(arr[0]);
	Qsort(arr,0,n);
	
	for(int a: arr) cout<<a<<" ";
	return 0;
}
