#include<bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int>& A, int k, int x) {
        int left = 0, right = A.size() - k;
        while (left < right) {
            int mid = (left + right) / 2;
            if (x - A[mid] > A[mid + k] - x)
                left = mid + 1;
            else
                right = mid;
        }
    return vector<int>(A.begin() + left, A.begin() + left + k);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k,x;
    cin>>k>>x;
    vector<int>ans=findClosestElements(arr,k,x);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}
    