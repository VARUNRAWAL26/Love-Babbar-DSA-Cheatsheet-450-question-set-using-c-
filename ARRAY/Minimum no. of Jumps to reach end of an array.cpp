#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int max_reach=arr[0];
    int step=arr[0];
    int jump=1;
    if(arr[0]==0)
    {
        cout<<'-1';
        return 0;
    }
    for(int i=1; i<n; i++)
    {
        if(i>=n)
        {
            break;
        }
        if(i+arr[i]>max_reach)
        {
            max_reach=i+arr[i];
        }
        step--;
        if(step==0)
        {
            jump++;
            step=max_reach-i;
        }
    }
    cout<<jump;
    return 0;
}
