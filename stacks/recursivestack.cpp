#include<bits/stdc++.h>
using namespace std;
void display(stack<int>&st){
    if(st.size()==0) return ;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    while(st.size()!=0){
        cout<<st.top()<<endl;
        st.pop();
    }
}