#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,1,1,2,6,5,6,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    int hash[10]={0};
    for(int i=0;i<length;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<"The count of:"<<i<<"is"<<hash[i]<<endl;
    }
    return 0;

}