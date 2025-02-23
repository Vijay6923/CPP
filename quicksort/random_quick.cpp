#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pv_ele = arr[s+e/2]; // Pivot element
    int count = 0;
    // Count the number of elements less than or equal to the pivot element
    for(int i = s; i <= e; i++) {
        if(i==(s+e/2)) continue;
        if(arr[i] <= pv_ele) {
            count++;
        }
    }
    // Place the pivot element at its correct position
    int pv_idx = s + count;
    swap(arr[s+e/2], arr[pv_idx]);
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

void quicksort(int arr[], int s, int e) {
    if(s >= e) return;
    int pi = partition(arr, s, e); // Partition the array
    quicksort(arr, s, pi - 1); // Sort the left side
    quicksort(arr, pi + 1, e); // Sort the right side
}

int main() {
    int n;
    cin >> n; // Correct input statement
    int arr[n];
    
    // Read the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    quicksort(arr, 0, n - 1); // Call quicksort
    
    // Output the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
