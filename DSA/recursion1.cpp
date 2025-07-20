#include<iostream>
using namespace std;
void fun(int n,int m=1)
{
    cout<<m<<" ";
    if(n==m) return;
    fun(n,m+1);
    if(n>m)
    cout<<m<<" ";
    
}
int main()
{
    int n=5;
    fun(n);
    return 0;
}