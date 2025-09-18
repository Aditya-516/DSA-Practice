#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinDiff(vector<int> arr, int k) {
    int n = arr.size();
    if (n == 1) return 0;

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Initial difference without any modification
    int ans = arr[n-1] - arr[0];

    // Step 2: Smallest and largest after modification
    int smallest = arr[0] + k;
    int largest = arr[n-1] - k;

    // Step 3: Check each partition
    for (int i = 0; i < n - 1; i++) {
        int minVal = min(smallest, arr[i+1] - k);
        int maxVal = max(largest, arr[i] + k);
        ans = min(ans, maxVal - minVal);
    }

    return ans;
}

int main() {
    vector<int> arr = {3, 9, 12, 16, 20};
    int k = 3;
    cout << "The Minimum Difference is: " << getMinDiff(arr, k);
    return 0;
}
