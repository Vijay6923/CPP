// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while(n>0){
//         count++;
//         n=n/10;


//     }
// cout<<count<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int power=1;
//     int ans=0;
//     while(n>0){
//         int ld=n%10;
//         ans+=ld*power;
//         power*=2;
//         n=n/10;
//     }
//     cout<<ans;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int power=1;
    int ans=0;
    while(n>0){
        int ld=n%2;
        ans +=ld*power;
        power *=10;
        n=n/2;
    }
    cout<<ans;
}