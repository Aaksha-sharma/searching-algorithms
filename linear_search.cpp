#include<iostream>
using namespace std;
int linear_search(int a[],int key,int n)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n,i,sum=0,key;
    cout<<"enter n:\t";
    cin>>n;
    cout<<"enter key:\t";
    cin>>key;
    int a[n];
    cout<<"enter array elements:\t";
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<linear_search(a,key,n);
}