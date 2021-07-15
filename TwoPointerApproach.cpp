//Finding a pair with given sum from an array using two pointer approach


#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=16;
    int low=0,high=n-1;
    
    while(low<high)
    {
        if(arr[low]+arr[high]==sum)
        {
            cout<<arr[low]<<" "<<arr[high];
            return 0;
        }
        else if(arr[low]+arr[high]<sum)
                low++;
        else high--;
    }
    cout<<-1;
	return 0;
}
