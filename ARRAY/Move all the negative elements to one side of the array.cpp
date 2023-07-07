#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n],arr1[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=k)
            {
                swap(arr[i],arr[k]);
            }
            k++;
        }

    }
    cout<<"Sorted array:- ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
