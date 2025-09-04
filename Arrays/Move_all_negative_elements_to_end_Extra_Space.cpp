/*
 Problem: Segregate Positive and Negative Numbers
 Platform: GeeksforGeeks
 Link: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end/0

 Given an unsorted array having both negative and positive integers, 
 place all negative elements at the end of the array without changing 
 the order of positive and negative elements.

 Expected Time Complexity: O(n)
 Expected Auxiliary Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> temp;
        temp.reserve(arr.size()); // avoid reallocations

        // Step 1: Store all non-negative (positive + 0) elements
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 0) {
                temp.push_back(arr[i]);
            }
        }

        // Step 2: Store all negative elements
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < 0) {
                temp.push_back(arr[i]);
            }
        }

        // Step 3: Copy result back to arr (in-place update)
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }
    }
};

// ---------- Test Driver Code (for local testing only) ----------
int main() {
    vector<int> arr = {1, -1, 3, 2, -7, -5, 11, 6};

    Solution obj;
    obj.segregateElements(arr);

    cout << "Rearranged Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
