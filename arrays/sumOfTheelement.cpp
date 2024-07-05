#include<iostream>
using namespace std;
int main(){
    /
    int array[]={1,4,2,3,5};
    
    int sum=0;
    for (int i=0;i<5;i++){
        sum+=array[i];
    }
    cout<<sum<<endl;
    return 0;

}