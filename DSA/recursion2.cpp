#include <iostream>
using namespace std;
int fun(int num)
{
    if(num==1) return 0;
    else if(num%2==0)
    {
        return 1+fun(num/2);
    }
    else return 1+min(fun(num-1),fun(num+1));
}
int main()
{
    int num=15;
    fun(num);
    return 0;
}