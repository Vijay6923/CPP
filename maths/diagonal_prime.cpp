#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
            
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int mx=0;;
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i])){
                mx=max(mx,nums[i][i]);
            }
            if(isPrime(nums[i][n-i-1])){
                mx=max(mx,nums[i][n-i-1]);
            }
        }
        return mx;
        
    }
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>nums(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }

    }
    cout<<diagonalPrime(nums);
}