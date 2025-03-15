#include<bits/stdc++.h>
using namespace std;
void generate(string s,int o,int c,int n){
    if(c==n){
        cout<<s<<endl;
        return;
    }
    if(o<n){
        generate(s+'(',o+1,c,n);

    }
    if(c<o){
        generate(s+')',o,c+1,n);

    }
    
    

}
int main(){
    int n;
    cin>>n;
    generate("",0,0,n);
}