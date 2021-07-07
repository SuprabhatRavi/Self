//finds if there are 3 elements in an array such that a[i]+a[j]+a[k]==item

#include <iostream>
using namespace std;


bool findsum(int* arr,int n,int item)
{
    int *first=arr,*second=&arr[n];
    while(first<second)
    {
        if(*first+*second<item)
            first++;
        else
            if(*first+*second>item)
                second--;
            else
                return 1;
    }
    return 0;
}



int main() {
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	int item=9;
	for(int i=0;i<10;i++)
    {
        if(findsum(&arr[i],10-i,item-arr[i]))
        {
            cout<<"found";
            return 0;
        }
    }
    cout<<"Not found";
	return 0;
}
