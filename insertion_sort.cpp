#include<iostream>
using namespace std;
void is(int num, int arr[])
{
    for (int i=0;i<num;i++)
    {
        int curr = arr[i];
        int j = i-1;
        while(arr[j]>curr && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}
void display(int num, int arr[])
{
    for (int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    int arr[1000];
    cout<<"enter number of elements in the array: ";
    cin>>n;
    cout<<"enter the array elements: ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    is(n,arr);
    cout<<"sorted array: ";
    display(n,arr);
}