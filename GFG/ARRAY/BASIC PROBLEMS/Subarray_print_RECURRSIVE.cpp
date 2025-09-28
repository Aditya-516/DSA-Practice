#include <iostream>
#include <vector>
using namespace std;

// Recursively print elements of a subarray from start to end
void PrintSubarray(vector<int> &arr, int start, int end) {
    if (start > end) {
        cout << endl; // print newline after subarray
        return;
    }
    cout << arr[start] << " "; // add space between elements
    PrintSubarray(arr, start + 1, end);
}

// Recursively generate all subarrays
void GenerateSubarray(vector<int> &arr, int start, int end) {
    if (end == arr.size()) return;        // All subarrays done
    if (start > end) {                    // Move to next subarray length
        GenerateSubarray(arr, 0, end + 1);
        return;
    }
    PrintSubarray(arr, start, end);       // Print current subarray
    GenerateSubarray(arr, start + 1, end); // Move start forward
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    cout << "Array: ";
    for (int val : arr) cout << val << " ";
    cout << endl;

    cout << "All Subarrays:" << endl;
    GenerateSubarray(arr, 0, 0);
    return 0;
}
