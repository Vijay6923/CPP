#include<bits/stdc++.h>
using namespace std;
bool checkPerfectNumber(int n) {
        int sum=0;
        if(n==1) return false;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                sum+=i;
            }

        }
        for(int i=sqrt(n);i>=1;i--){
            if(n%i==0){
                sum=sum+(n/i);
            }
        }
        
        if(sum-n==n){
            return true;
        }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<checkPerfectNumber(n);

}