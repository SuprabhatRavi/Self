//Hoare's algo is about 3x faster than Lomuto algo because it does 3x fewer swaps as compared to Lomuto
/*
Self Note: You can't switch the statement if(l>=h) return h;(line 28) by while (l<h) and return h(line 18) after the while loop ends because when it reaches 
the middle where l<h it'll enter the loop and since it's do while the l will land on an elment which is greater than the pivot and h will land on an element 
that is smaller than piviot and since there's swap(line 29) it'll swap both the elements and the array isen't partioned anymore... 
*/


#include <iostream>
#include<algorithm>
using namespace std;


int Partetion(int arr[],int l,int h)
{
    int p=arr[l];
    l--;h++;
    while(true)
    {
        do 
        {
            l++;
        }while(arr[l]<p);
        do
        {
           h--; 
        }while(arr[h]>p);
        if(l>=h) return h;
        swap(arr[l],arr[h]);
    }
}

void Qsort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=Partetion(arr,l,h);
        Qsort(arr,l,p);
        Qsort(arr,p+1,h);
    }
}

int main() {
	int arr[]= /*{7, 9, 4, 2, 10, 8, 5} {12, 10, 9 ,5} */ {5, 9, 10, 12}; 
	int n=sizeof(arr)/sizeof(arr[0]);
	Qsort(arr,0,n-1);
	
	for(int a: arr) cout<<a<<" ";
	return 0;
}
