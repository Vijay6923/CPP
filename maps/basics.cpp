#include <bits/stdc++.h>
#include<unordered_map>


using namespace std;
int main(){
    unordered_map<string,int>m;
    pair<string,int>p1;
    p1.first="vijay";
    p1.second=1;
    m.insert(p1);
    pair<string,int>p2;
    p2.first="dinkar";
    p2.second=2;
    m.insert(p2);
    pair<string,int>p3;
    p3.first="yash";
    p3.second=3;
    m.insert(p3);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
}