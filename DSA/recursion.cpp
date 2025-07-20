#include<iostream>
using namespace std;
int print(int n,int i=1)
{
    if(n==0) return 200;
    cout<<n<<" ";
    int t=print(n-1);
    return t;
} 
int main()
{
    int n=5;
    cout<<print(n);
    return 0;
}