#include<bits/stdc++.h>
using namespace std;
bool check(long long mid,vector<int>& time, int totalTrips){
        long long trips=0;
        int n=time.size();
        for(int i=0;i<n;i++){
            trips +=mid/(long long )time[i];

        }
        if(trips<(long long )totalTrips) return false;
        else return true;

    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,time[i]);

        }
        long long l=1;
        long long h=(long long )mx*(long long)totalTrips;
        long long ans=-1;
        while(l<=h){
            long long mid=l+((h-l)/2);
            if(check(mid,time,totalTrips)){
                ans=mid;
                h=mid-1;
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
    vector<int>time(n);
    for(int i=0;i<n;i++){
        cin>>time[i];
    }
    int totalTrips;
    cin>>totalTrips;
    cout<<minimumTime(time,totalTrips)<<endl;

}