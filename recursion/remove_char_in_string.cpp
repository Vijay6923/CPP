#include<bits/stdc++.h>
using namespace std;
void removeChar(string ans,string s,int idx,char target){
    if(idx==s.length()){
        cout<<ans<<endl;
        return;
    }
    char ch=s[idx];
    if(ch ==target) removeChar(ans,s,idx+1,target);
    else removeChar(ans+ch,s,idx+1,target);
}
int main(){
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    removeChar("",s,0,ch);
}