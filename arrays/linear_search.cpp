#include<iostream>
using namespace std;
int main(){
    int array[]={1,4,7,9,45,78};
    int key=45;
    int ans=-1;
    for (int i=0;i<6;i++){
        if(array[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}