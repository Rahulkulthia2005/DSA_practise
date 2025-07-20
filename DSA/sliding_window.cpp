#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int flag=0;
    for(int i=0;i<len-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Not sorted";
    else
    cout<<"Sorted";
return 0;
}