#include<bits/stdc++.h>
using namespace std;
bool isbalances(string s){
    stack<char>st;
    int n=s.length();
    if(n%2!=0) return false;
    for(int i=0;i<n;i++){
        if(s[i]=='['|| s[i]=='('|| s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(st.size()==0) return false;
            else{
                if(s[i]==']'|| s[i]==')'|| s[i]=='}'){
                st.pop();
            }
            }
            
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s="(]";
    cout<<bool(isbalances(s))<<endl;


}