#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,3,3,5,4};
    int height=0,ans=0,n=7;
    for(int i=0;i<n;i++)
    {
        if(height<arr[i])
        {
            ans++;
            height=arr[i];
        }
    }
    cout<<ans;
    return 0;
}