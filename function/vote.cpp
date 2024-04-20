#include<iostream>
using namespace std;
bool Age( int x){
    if(x>=18){
        return true;
    }else{
        return false;
    }
}
int main(){
    int age;
    cin>>age;
    bool result=Age(age);
    cout<<result;
    return 0;

}