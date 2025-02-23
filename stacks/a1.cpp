#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int>s2;
    s2.push(st.top());
    st.pop();
    s2.push(st.top());
    st.pop();
    st.pop();
    st.push(s2.top());
    st.pop();
    cout<<st.top()<<endl;



}