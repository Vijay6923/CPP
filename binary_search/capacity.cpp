#include<bits/stdc++.h>
using namespace std;
bool check(int mid,vector<int>& weights, int days){
        int n=weights.size();
        int m=mid;
        int count=1;
        for(int i=0;i<n;i++){
            if(m>=weights[i]){
                m-=weights[i];
            }
            else{
                count++;
                m=mid;
                m-=weights[i];
            }
        }
        if(count>days) return false;
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(weights[i]>max){
                max=weights[i];
            }
        }
        int l=max;
        int h=sum;
        int minCapacity=0;
        while(l<=h){
            int mid=l+((h-l)/2);
            if(check(mid,weights,days)){
                minCapacity=mid;
                h=mid-1;

            }
            else {
                l=mid+1;
            }
        }
        return minCapacity;
        
    }
    int main(){
    int n;
    cin>>n;
    vector<int>weights(n);
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    int days;
    cin>>days;
    cout<<shipWithinDays(weights,days);

}