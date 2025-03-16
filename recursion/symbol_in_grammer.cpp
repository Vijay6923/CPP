#include<bits/stdc++.h>
using namespace std;
int kthGrammer(int n,int k){
    if(n==1) return 0;
    if(k%2==0){
        return 1-kthGrammer(n-1,k/2);
    }
    else{
        return kthGrammer(n-1,k/2+1);
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<kthGrammer(n,k);

}