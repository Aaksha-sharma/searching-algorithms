#include<iostream>
using namespace std;
int binarySearch(int num,int arr[],int key)
{
    int start=0;
    int end=num;
    while(end>=start)
    {
        int mid = (start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,i,key;
    cout<<"enter n:\t";
    cin>>n;
    cout<<"enter key:\t";
    cin>>key;
    int a[n];
    cout<<"enter array elements:\t";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"element present at index: "<<binarySearch(n,a,key)<<endl;
    return 0;
}