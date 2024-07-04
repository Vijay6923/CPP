#include<iostream>
using namespace std;
int main(){
   
    int arr[]={3,5,7,9,17,543};
    int max=arr[0];
    for (int i=1;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
    }
    cout<<max<<endl;
    return 0;

}