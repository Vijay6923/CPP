#include<bits/stdc++.h>
using namespace std;
void helper(int n,int s,string current,vector<int>&ans){
    if(current.size()==n){
        ans.push_back(stoi(current));
        return;
    }
    for(int i=s;i<=9;i++){
        helper(n,i+1,current+to_string(i),ans);
    }
}

vector<int> increasingnumber(int n){
    vector<int>ans;
    if(n==1){
        for(int i=1;i<=9;i++){
            ans.push_back(i);
            
        }
        return ans;
    }
    
        helper(n,1,"",ans);
        return ans;
    
}
int main(){
    int n;
    cin>>n;
    vector<int>ans=increasingnumber(n);
    for(int x:ans){
        cout<<x<<" ";
    }
    
}