#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
        if(n==INT_MIN) return false;
        int count=__builtin_popcount(n);
        if (count==1) return true;
        else return false;
        
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n)<<endl;
}