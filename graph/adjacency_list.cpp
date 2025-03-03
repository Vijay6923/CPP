#include<bits/stdc++.h>
using namespace std;
vector<list<int> > graph;
int v;
void add_edge(int src,int dest,bool bi_dr=true){
    graph[src].push_back(dest);
    if(bi_dr){
        graph[dest].push_back(src);
    }

}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"-->";
        for(auto ele : graph[i]){
            cout<<ele<<" ,";
        }
        cout<<"\n";
    }
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);

    }
    display();
    return 0;
}