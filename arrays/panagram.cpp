#include<bits/stdc++.h>
using namespace std;

    bool checkIfPangram(string s) {
        vector<int>freq(26,0);

        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']=1;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) {
                return false; 
            }
        }

        return true;


        
    }

int main(){
    string s;
    cin>>s;
    cout<<checkIfPangram(s);

}