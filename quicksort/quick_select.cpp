#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    // Use the middle element as the pivot
    int mid = s + (e - s) / 2;  // Safely calculate the middle index
    int pv_ele = arr[mid];  // Pivot element
    
    // Swap the pivot with the first element (or any consistent position)
    swap(arr[mid], arr[s]);

    int count = 0;
    // Count the number of elements less than or equal to the pivot element
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] <= pv_ele) {
            count++;
        }
    }

    // Place the pivot element at its correct position
    int pv_idx = s + count;
    swap(arr[s], arr[pv_idx]);

    int i = s;
    int j = e;
    
    // Partition the array based on the pivot
    while(i < pv_idx && j > pv_idx) {
        if(arr[i] <= pv_ele) {
            i++;
        }
        if(arr[j] > pv_ele) {
            j--;
        } else if(arr[i] > pv_ele && arr[j] <= pv_ele) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pv_idx; // Return the pivot index
}

int kthSmallest(int arr[], int s, int e, int k) {
    int pi = partition(arr, s, e); // Partition the array
    if(pi == k) return arr[pi]; // Found the k-th smallest element
    else if (pi < k) return kthSmallest(arr, pi + 1, e, k); // Search in the right half
    else return kthSmallest(arr, s, pi - 1, k); // Search in the left half
}

int main() {
    int n;
    cin >> n; // Correct input statement
    int arr[n];
    
    // Read the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = 6; // The value of k you want to find the k-th smallest element
    
    cout << kthSmallest(arr, 0, n - 1, k - 1); // Call the function (k-1 because of zero-based indexing)
    cout << endl;

    return 0;
}
