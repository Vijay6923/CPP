#include<bits/stdc++.h>
using namespace std;
string cas(int n){
    if(n==1) return "1";
    string str=cas(n-1);
    string ans="";
    int freq=1;
    char ch=str[0];
    for(int i=1;i<str.length();i++){
        char dh=str[i];
        if(ch==dh){
            freq++;
        }
        else{
            ans=ans+(to_string(freq)+ch);
            freq=1;
            ch=dh;
        }

    }
    ans=ans+(to_string(freq)+ch);
    return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<cas(n);

}