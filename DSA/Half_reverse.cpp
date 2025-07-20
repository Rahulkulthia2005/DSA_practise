#include<iostream>
using namespace std;
/*int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n/2;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-i-1]=temp;
       
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
    return 0;
}*/
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0,j=(len-1)/2;i<len/4;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}