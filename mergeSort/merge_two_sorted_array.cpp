#include<bits/stdc++.h>
using namespace std;
// int c=0;
// int inversion(vector<int>&a,vector<int>&b){
//     int i=0;
//     int j=0;
//     int count=0;
//     while(i<a.size()&& j<b.size()){
//         if(a[i]<=b[j]){
//             count=count+(a.size()-i);
//             j++;

//         }
//         else{
//             i++;
//         }
//     }
//     return count;

// }
vector<int> merge(vector<int>&a,vector<int>&b,vector<int>&res){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()&& j<b.size()){
        if(a[i]>=b[j]){
            res[k]=a[i];
            i++;
        }
        else{
            res[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<a.size()){
        res[k]=a[i];
        i++;
        k++;
    }
    while(j<b.size()){
        res[k]=b[j];
        j++;
        k++;
    }
    return res;
}
void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1) return ;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    // c+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergeSort(v);
    // int m;
    // cin>>m;
    // vector<int>b(m);
    // for(int i=0;i<m;i++){
    //     cin>>b[i];
    // }
    // vector<int>res(m+n);
    
    // merge(a,b,res);
    // for(int i=0;i<n+m;i++){
    //     cout<<res[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    // cout<<endl;
    // cout<<c<<endl;

}