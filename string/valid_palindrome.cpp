#include<bits/stdc++.h>
using namespace std;
bool palidrome(string s){
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<=j){
        while(i<j && !isalnum(s[i]))i++;
        while(i<j && !isalnum(s[j]))j--;
        if(tolower(s[i])!=tolower(s[j])) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    cout<<palidrome(s);

}