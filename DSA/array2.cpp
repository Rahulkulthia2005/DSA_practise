#include<iostream>
using namespace std;
int add(int arr[],int len){
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<add(arr,len);
    return 0;
}