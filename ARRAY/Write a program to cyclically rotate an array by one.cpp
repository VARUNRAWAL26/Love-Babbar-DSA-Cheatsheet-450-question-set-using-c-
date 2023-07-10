#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of 1st array: ";
    cin >> n;
    int arr[n],arr1[n];
    cout<<"1st array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int k;
    cout<<"how many times you want to rotate it:- ";
    cin>>k;
    k=k%n;
    while(k--)
    {
        int last_element=arr[n-1];
        for(int i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last_element;
    }
    cout<<"Rotated array:- ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
