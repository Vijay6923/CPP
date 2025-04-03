#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];


    }
    int min_sum=sum;
    int i=1;int j=k;
    while(j<n){
        int currsum=sum-arr[i-1]+arr[j];
        if(currsum<min_sum){
            min_sum=currsum;
        }
        sum=currsum;
        i++;
        j++;

    }
    cout<<min_sum<<endl;
}