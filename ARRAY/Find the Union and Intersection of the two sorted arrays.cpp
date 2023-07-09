#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of 1st array: ";
    cin >> n;
    int m;
    cout << "Enter the size of 2nd array: ";
    cin >> m;

    int arr1[n],arr2[m];
    cout<<"1st array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr1[i];
    }
    cout<<"2nd array"<<endl;
    for(int i=0; i<m; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr2[i];
    }

    //1 2 3 4
    //1 5 6
    cout<<"Union of the two sorted array:- ";
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]==arr2[j])
        {
            cout<<arr1[i++]<<" ";
            j++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j++]<<" ";
        }
    }
    while(i<n)
    {
        cout<<arr1[i++]<<" ";
    }
    while(j<m)
    {
        cout<<arr2[j++]<<" ";
    }

    cout<<endl<<"Intersection of two sorted array:- ";
    i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            j++;
        }
    }

    return 0;
}
