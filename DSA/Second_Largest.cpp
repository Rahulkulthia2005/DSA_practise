#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=5;
    int arr[5]={15,18,34,20,25};
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(i==(n-2))
        {
            cout<<arr[i];
        }
    }
    return 0;
}