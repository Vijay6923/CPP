
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int candidate=-1,votes=0;
    for(int i=0;i<n;i++){
        if(votes==0){
            candidate=arr[i];
            votes=1;
        }
        else{
            if(votes==candidate){
                votes++;
            }
            else{
                votes--;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }

    }
    if(count>n/2){
        cout<<candidate<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
    

    return 0;
}
