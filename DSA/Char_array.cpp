#include<iostream>
using namespace std;
int main()
{
    char str[6];
    cout<<"Enter the element of the array "<<endl;
    cin.getline(str,6);
    cout<<"Enter character of the array is "<<endl;
    for(char ch : str)
    {
        cout<<ch<<" ";
    }
    cout<<endl;

    return 0;
}