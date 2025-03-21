#include<bits/stdc++.h>
#include<unordered_set> 
using namespace std;
void subset(string s,string ans,unordered_set<string>& set){
    if(s==""){
        set.insert(ans);
        return;
    }
    char ch=s[0];
    subset(s.substr(1),ans+ch,set);
    subset(s.substr(1),ans,set);
}
int main(){
    string s;
    cin>>s;
    unordered_set<string>set;
    subset(s,"",set);
    for(auto x:set){
        cout<<x<<endl;
    }
}