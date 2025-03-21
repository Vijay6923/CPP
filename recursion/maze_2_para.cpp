#include<bits/stdc++.h>
using namespace std;
int maze2(int r,int c){
    if(r<1 ||c<1) return 0;
    if(r==1 && c==1) return 1;
    return maze2(r,c-1)+maze2(r-1,c);
}
int main(){
    int r,c;
    cin>>r>>c;
    cout<<maze2(r,c);
}