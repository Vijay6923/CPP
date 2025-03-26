#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n==0||n==1){
        cout<<n<<endl;
        return 0;
    }
    else{
        int s=1;
        int l=n;
        while(s<=l){
            int mid=s+(l-s)/2;
            if(mid==n/mid){
                cout<<mid<<endl;
                return 0;
            }
            else if(mid>n/mid){
                l=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout<<l<<endl;
        return 0;
    }
}