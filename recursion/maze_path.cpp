#include<bits/stdc++.h>
using namespace std;
void maze(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr ==er && sc==ec) {
        cout<<s<<endl;
    }
     maze(sr,sc+1,er,ec,s+'r');
     maze(sr+1,sc,er,ec,s+'d');
}
int main(){
    int r,c;
    cin>>r>>c;
    int mat[r][c];
    maze(0,0,r-1,c-1,"");
}