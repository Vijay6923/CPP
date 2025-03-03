#include<bits/stdc++.h>
using namespace std;
bool bfs(vector<int> adj[],int n,int s,int d){
    vector<bool>visited(n+1,false);
    queue<int>q;
    visited[s]=true;
    q.push(s);

    while(!q.empty()){
        int node=q.front();
        q.pop();
        if(node==d){
            return true;

        }
        for(int nb: adj[node]){
            if(!visited[nb]){
                visited[nb]=true;
                q.push(nb);
            }
        }

    }
    return false;
}
int main(){
    int n,e;
    cin>>n>>e;  
    vector<int>adj[n+1];
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    int s,d;
    cin>>s>>d;
    if(bfs(adj,n,s,d)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }


}