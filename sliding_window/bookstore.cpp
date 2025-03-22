#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;
        vector<int>& arr = customers;
        int n = arr.size();
        
        // Calculate the initial "loss" due to grumpy customers in the first 'minutes' period
        int prevloss = 0;
        for (int i = 0; i < k; i++) {
            if (grumpy[i] == 1) prevloss += arr[i];
        }

        int maxloss = prevloss;
        int maxidx = 0;
        int i = 1;
        int j = k;
        
        // Slide the window to find the maximum "loss" that we can flip (change grumpy to happy)
        while (j < n) {
            int curloss = prevloss;
            if (grumpy[i] == 1) curloss += arr[j];
            if (grumpy[i - 1] == 1) curloss -= arr[i];

            if (maxloss < curloss) {
                maxloss = curloss;
                maxidx = i;
            }

            prevloss = curloss;
            i++;
            j++;
        }

        // Mark the `maxidx` window as where we make grumpy customers happy
        for (int i = maxidx; i < maxidx + k; i++) {
            grumpy[i] = 0;
        }

        // Calculate the total satisfaction
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                sum += arr[i];
            }
        }
        
        return sum;
    }
};

int main() {
    // Example input
    vector<int> customers = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    int minutes = 3;

    // Create solution object and calculate max satisfied customers
    Solution solution;
    int result = solution.maxSatisfied(customers, grumpy, minutes);
    
    // Output the result
    cout << "Max satisfied customers: " << result << endl;
    
    return 0;
}
