#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    int a=INT_MAX;
    int b=INT_MIN;
    for(int i=0;i<n;i++)
    {
        a = min(a, arr[i]);
        b = max(b, arr[i]);
    }

    cout<<"Maximum element in an array:- "<<b<<endl;
    cout<<"Minimum element in an array:- "<<a<<endl;

    return 0;
}
