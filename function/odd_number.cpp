#include<iostream>
using namespace std;
bool Prime(int x){
    if(x%2!=0){
        return true;
    }else{
        return false;
    }

}
int main(){
    int a,b;
    cin>>a>>b;
    for (int i=a;i<=b;i++){
         int result= Prime(i); 
         cout<<result;
         }
    
    return 0;

}
