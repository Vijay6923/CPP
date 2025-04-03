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
        sum=sum+arr[i];
    }
    int max_sum=sum;
    int i=1;
    int j=k;
    while(j<n){
        int current_sum=sum-arr[i-1]+arr[j];
        if(current_sum>max_sum){
            max_sum=current_sum;
        }
        sum=current_sum;
        i++;
        j++;


    }
    cout<<max_sum<<endl;
}