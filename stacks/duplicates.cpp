#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    stack<char>st;
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        if(st.size()==0){
            st.push(ch);

        }
        else if(st.top()!=ch){
            st.push(ch);


        }
        else{
            st.pop();
        }

    }
    string ans="";
    while(st.size()>0){
        char ch=st.top();
        st.pop();
        ans +=ch;
    }
    cout<<ans<<endl;

}