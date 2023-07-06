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
    
    copy(arr,arr+n,arr1);
    sort(arr1,arr1+n);

    int k;
    cout<<"Enter the kth value:- ";
    cin>>k;

    int a=arr1[k-1];
    int b=arr1[n-k];
    int c=find(arr,arr+n,a)-arr;
    int d=find(arr,arr+n,b)-arr;

    cout<<"Maximum "<<k<<" element is "<<b<<" at index "<<d<<endl;
    cout<<"Minimum "<<k<<" element is "<<a<<" at index "<<c<<endl;
    return 0;
}
