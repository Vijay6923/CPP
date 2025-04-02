#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k=1;
    
    
    int flips=0,i=0,j=0;
    int maxlen=INT_MIN,len=INT_MIN;
    while(j<n){
        if(nums[j]==1) j++;
        else{
            if(flips<k){
                flips++;
                j++;
            }
            else{
                len=j-i;
                maxlen=max(maxlen,len);
                while(nums[i]==1)i++;
                i++;
                j++;
            }
        }
    }
    len=j-i;
    maxlen=max(maxlen,len);
    cout<<maxlen-1<<endl;
        
    
}