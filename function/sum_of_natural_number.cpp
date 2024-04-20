#include<iostream>
using namespace std;
int square_of_natural_number(int x){
    return x*x;
}
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int result=square_of_natural_number(i);
        cout<<result<<endl;
        
    }
    return 0;
}