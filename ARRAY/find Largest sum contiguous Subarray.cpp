#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Using Kadanes Algorithm
    int n;
    cout << "Enter the size of array:- ";
    cin >> n;
    int arr[n],arr1[n];
    cout<<"1st array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int sum=0;
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {

        sum+=arr[i];
        maxi=max(sum,maxi);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"Maximum sum of the subarray:- "<<maxi;
    return 0;
}
