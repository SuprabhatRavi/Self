#include <iostream>
#include <algorithm>
using namespace std;

void Sort(int *arr,int low,int mid,int high)
{
    int n1=mid-low+1,n2=high-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)arr1[i]=arr[i+low];
    for(int j=0;j<n2;j++)arr2[j]=arr[mid+j+1];
    
    int i=0,j=0,it=low;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[it]=arr1[i];i++,it++;
        }
        else 
        {
            arr[it]=arr2[j];j++,it++;
        }
    }
    while(i<n1){
        arr[it]=arr1[i];i++;it++;
    }
    while(j<n2){
        arr[it]=arr2[j];j++;it++;
    }
}

void MergeSort(int* arr,int low,int high)
{
    int mid=low+(high-low)/2;
    if(low<high)
    {
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Sort(arr,low,mid,high);
    }
    
    
}
int main() {
	int arr[]={4,2,6,1,9,5,6,78,011,34,74,86,14,3,0};  //011 is 9 as adding 0 before a number makes it octal
	int n=sizeof(arr)/sizeof(arr[0])-1;
	MergeSort(arr,0,n);
	
	for(int a:arr)
	{
	    cout<<a<<" ";
	}
	return 0;
}
