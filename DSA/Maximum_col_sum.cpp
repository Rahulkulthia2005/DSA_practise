#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    int max_row=INT_MIN;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+matrix[i][j];
        }
        max_row=max(max_row,sum);
    }
    cout<<max_row;
    return 0;
}