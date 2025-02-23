#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int sum=0;
        int temp=i;
        while(temp>0){
            int a=temp%10;
            sum += a*a*a;
            temp /=10;
        }
        if(i==sum){
            cout<<i<<endl;
        }

    }
}