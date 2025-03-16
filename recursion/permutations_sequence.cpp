#include<bits/stdc++.h>
using namespace std;
    string helper(string str, int k, string ans) {
        int n = str.length();
        if (n == 0) {
            return ans; 
        }
        int fact = 1;
        for (int i = 1; i < n; i++) {
            fact *= i;
        }
        int idx = (k - 1) / fact;  // (k - 1) because k is 1-indexed
        char ch = str[idx];
        str.erase(str.begin() + idx);
        ans += ch;
        k = k % fact;
        if (k == 0) {
            k = fact;
        }

        return helper(str, k, ans);  
    }

    string getPermutation(int n, int k) {
        string str = "";
        for (int i = 1; i <= n; i++) {
            str += to_string(i);
        }
        string ans = "";
        return helper(str, k, ans); 
    }


int main(){
   int n;
   cin>>n;
    int k;
    cin>>k;
    cout<<getPermutation(n,k);


}