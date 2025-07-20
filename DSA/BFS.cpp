#include<iostream>
#include<vector>
using namespace std;

void BFS(int start, vector<list<int>>&adj,vector<bool>& visited) {
    queue<int> q;
    visited[start]=true;
    q.push(start);
    while (q!.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(int x : adj[v]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
                
            }
        }
    }
}
int main()
{
    int V=5;
    vector<vector<int>> adj(V,vector<int>(V,0));
    adj[0][1]=adj[1][0]=1;
    adj[0][4]=adj[4][0]=1;
    adj[1][2]=adj[2][1]=1;
    adj[1][3]=adj[3][1]=1;
    adj[1][4]=adj[4][1]=1;
    adj[2][3]=adj[3][2]=1;
    adj[3][4]=adj[4][3]=1;
    vector<bool> visited(V,false);
    

    return 0;
}