#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int n;
    node *next;
    node(){
        next=NULL;
    }
    node(int n)
    {
        this->n=n;
        next=NULL;
    }
};


int length(node* N)
{
    int len=0;
    while(N)
    {
        len++;
        N=N->next;
    }
    return len;
}

void printNode(node *N)
{
    if(N==NULL)
        return;
    while(N)
    {
        cout<<N->n<<"->";
        N=N->next;
    }
    cout<<endl;
}


void Push_back(node *&N,int data)
{
    if(N==NULL)
    {
        N=new node(data);
        return;
    }
    node *curr = N;
    while(curr->next)
    {
        curr=curr->next;
    }
    curr->next=new node(data);
}


void reverse(node *&N)
{
    node *one,*two,*three;
    one=N;
    two=N;
    three=NULL;
    while(one)
    {
       one=one->next;
       two->next= three;
       three=two;
       two=one;
       
    }
    N=three;
}
int main() {
	node *head=NULL;
	for(int i=1;i<=10;i++)
	    Push_back(head,i);
	cout<<length(head)<<endl;
	printNode(head);
	reverse(head);
	printNode(head);
	return 0;
}
