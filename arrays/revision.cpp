#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    int key;
    cin>>key;
    int ans=0;
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
        else{
            ans=-1;
        }
    }
    cout<<ans<<endl;
    
    
    }
    
