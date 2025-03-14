#include<bits/stdc++.h>
using namespace std;
void combination(vector<int>v,vector<int>& arr,int n,int k,int idx){
    if(k==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(k<0){
        return ;
    }
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination(v,arr,n,k-arr[i],i);
        v.pop_back();

    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int>v;
    combination(v,arr,n,k,0);

}