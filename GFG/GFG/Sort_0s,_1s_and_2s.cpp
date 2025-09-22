/*
🔹 Problem: Sort an array of 0s, 1s and 2s (GFG)
Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s

Approach: Dutch National Flag Algorithm
- Use three pointers: low, mid, high
- low: boundary for 0s
- mid: current element
- high: boundary for 2s
*/

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int low = 0;          // points to the next position of 0
        int mid = 0;          // traverses the array
        int high = n - 1;     // points to the next position of 2

        while (mid <= high) {
            if (arr[mid] == 0) {
                // Case 1: Element is 0 → Swap with low, expand [0s] region
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1) {
                // Case 2: Element is 1 → Already in correct region
                mid++;
            }
            else {
                // Case 3: Element is 2 → Swap with high, shrink [2s] region
                swap(arr[mid], arr[high]);
                high--;
                // Don't move mid here because swapped element may be 0 or 1
            }
        }
    }
};

/*
✅ Complexity Analysis:
- Time Complexity: O(n) → Single traversal of the array
- Space Complexity: O(1) → In-place sorting
*/
