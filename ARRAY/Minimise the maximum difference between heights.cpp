#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n],arr1[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    sort(arr,arr+n);
    
    int k;
    cout<<"Enter the value of k:- ";
    cin>>k;

    int maxi=arr[n-1];
    int mini=arr[0];
    int res=maxi-mini;
    for(int i=1; i<n; i++)
    {
        maxi=max(arr[i-1]+k,arr[n-1]-k);
        mini=min(arr[i-1]-k,arr[0]+k);
        res=min(res,maxi-mini);
    }
    cout<<"Minimum of the Maximum Difference between the Heights:- "<<res;
    
    return 0;
}
