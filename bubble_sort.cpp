#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bs(int n, int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
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
    int num;
    int arr[1000];
    cout<<"enter the number of elements in array: "<<endl;
    cin>>num;
    cout<<"enter elements of the array: "<<endl;
    for (int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    bs(num,arr);
    cout<<"Sorted Array: ";
    display(num,arr);
    return 0;
}
