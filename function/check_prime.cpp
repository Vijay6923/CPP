#include<iostream>
using namespace std;
bool isPrime(int num){
    for (int i=2;i<=(num-1);i++){
        if(num%i==0) return false;
    }return true;
}
bool isPrimeBtr(int num){
    for (int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for (int i=a;i<=b;i++){
        if(isPrimeBtr(i)){
            cout<<i<<" ";
        }
    }
    return 0;

}