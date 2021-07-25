
//Clockwise

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{
	vector<vector<int>> a={{1,2,3},{4,5,6},{7,8,9}};
	int top=0, right=a[0].size()-1, bottom=a.size()-1, left=0; 
	
	while(top<=bottom && right>=left)
	{
	    for(int i=left;i<=right;i++)
	    {
	        cout<<a[top][i]<<" ";
	    }
	    top++;
	    
	    for(int i=top;i<=bottom;i++)
	    {
	        cout<<a[i][right]<<" ";
	    }
	    right--;
	    
	    for(int i=right;i>=left;i--)
	    {
	        cout<<a[bottom][i]<<" ";
	    }
	    bottom--;
	    
	    for(int i=bottom;i>=top;i--)
	    {
	        cout<<a[i][left]<<" ";
	    }
	    left++;
	}
	
	
	
	return 0;
}

//Counter-clockwise

#include <iostream>
#include<vector>
using namespace std;

int main() 
{
	vector<vector<int>> a={{1,2,3},{4,5,6},{7,8,9}};
	int top=0, left=0, bottom=a.size()-1, right=a[0].size()-1;
	
	while(top<=bottom && left<=right)
	{
	    for(int i=top;i<=bottom;i++)
	    {
	        cout<<a[i][left]<<" ";
	    }
	    left++;
	    
	    for(int i=left;i<=right;i++)
	    {
	        cout<<a[bottom][i]<<" ";
	    }
	    bottom--;
	    
	    for(int i=bottom;i>=top;i--)
	    {
	        cout<<a[i][right]<<" ";
	    }
	    right--;
	    
	    for(int i=right;i>=left;i--)
	    {
	        cout<<a[top][i]<<" ";
	    }
	    top++;
	}
	return 0;
}
