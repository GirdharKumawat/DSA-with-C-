#include<iostream>
#include<vector>
using namespace std;

// Function to heapify a subtree rooted at index i
void heapify(vector<int>& arr, int size, int i) {
    int max = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < size && arr[left] > arr[max]) {
        max = left;
    }

    // If right child is larger than current max
    if (right < size && arr[right] > arr[max]) {
        max = right;
    }

    // If max is not the root
    if (max != i) {
        swap(arr[max], arr[i]);
        heapify(arr, size, max);
    }
}

// Function to perform heap sort
void heap_sort(vector<int>& arr) {
    int size = arr.size();

    // Build max heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    // Extract elements from heap one by one
    for (int i = size - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {10, 20, 15, 12, 40, 25, 18};
    int n = arr.size();

    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Perform heap sort
    heap_sort(arr);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}