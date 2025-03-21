#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);  
    if(s.find(30)!=s.end()){
        cout<<" yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    for (int x : s) {
        cout << x << " ";
    }
}
