#include<bits/stdc++.h>
using namespace std;
bool check(int speed ,vector<int>& piles, int h){
        int count=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(count>h)return false;
            if(speed>=piles[i]) count++;
            else if(piles[i]%speed==0) count +=piles[i]/speed;
            else{
                count +=piles[i]/speed +1;
            }
        }
        if(count>h)return false;
        else return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,piles[i]);
        }
        int l=1;
        int hi=mx;
        int ans=-1;
        while(l<=hi){
            int mid=l+((hi-l)/2);
            if(check(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
    }
int main(){
    int n;
    cin>>n;
    vector<int>piles(n);
    for(int i=0;i<n;i++){
        cin>>piles[i];
    }
    int h;
    cin>>h;
    cout<<minEatingSpeed(piles,h)<<endl;

}