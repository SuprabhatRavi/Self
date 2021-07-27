//Finding Kth smallet element using Lomuto's partation

#include <iostream>
#include<algorithm>
using namespace std;

int partation(int arr[],int l,int h)
{
    srand(time(0));
    int p=l+(rand()%(h-l));
    swap(arr[h],arr[p]);
    p=h;
    int i=l;
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

int main() {
	int arr[]={10,4,5,8,11,6,26};
	int k=5,l=0;
	int h=sizeof(arr)/sizeof(arr[0])-1;
	int p=1;

	
	while(l<=h)
	{
	    p=partation(arr,l,h);
	    if(p==k-1)
	    {
	         cout<<arr[p];
	         break;
	    }
	    else if(p<k-1) l=p+1;
	    else h=p-1;
	}
	return 0;
}
