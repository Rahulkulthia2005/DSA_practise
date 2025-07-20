#include<iostream>
using namespace std;
int main()
{
    const int V=5;
    int graph[V][V]={0};
    graph[0][1]=graph[1][0]=1;
    graph[0][4]=graph[4][0]=1;
    graph[1][2]=graph[2][1]=1;
    graph[1][3]=graph[3][1]=1;
    graph[1][4]=graph[4][1]=1;
    graph[2][3]=graph[3][2]=1;
    graph[3][4]=graph[4][3]=1;
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}