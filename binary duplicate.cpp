#include <iostream>
using namespace std;

bool searchInRotatedArray(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return true;
        }

        // If the left half is sorted
        if (arr[low] < arr[mid]) {
            // Check if key lies in the left half
            if (arr[low] <= key && key < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // If the right half is sorted
        else if (arr[low] > arr[mid]) {
            // Check if key lies in the right half
            if (arr[mid] < key && key <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        // Handles the case where arr[low] == arr[mid]
        else {
            low++;
        }
    }

    return false;
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 3}; // Example rotated array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6; // Element to search

    bool result = searchInRotatedArray(arr, n, key);

    if (result) {
        cout << "Key is present in the array." << endl;
    } else {
        cout << "Key is not present in the array." << endl;
    }

    return 0;
}
