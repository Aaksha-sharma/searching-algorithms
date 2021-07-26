#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void ss(int n, int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                swap(&arr[j],&arr[i]);
            }
        }
    }
}
void display(int num , int arr[])
{
    for (int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int num;
    int arr[1000];
    cout<<"enter the number of elements in array: "<<endl;
    cin>>num;
    cout<<"enter elements of the array: "<<endl;
    for (int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    ss(num,arr);
    cout<<"Sorted Array: ";
    display(num,arr);
    return 0;
}
