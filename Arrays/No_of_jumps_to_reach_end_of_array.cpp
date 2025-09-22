#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int> &arr) {
    int n = arr.size();
    if (n <= 1) return 0;        // Already at end
    if (arr[0] == 0) return -1;  // Cannot move anywhere

    int maxReach = arr[0];
    int currReach = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1) return jumps;

        maxReach = max(maxReach, i + arr[i]);

        if (i == currReach) {
            if (i >= maxReach) return -1; // stuck
            jumps++;
            currReach = maxReach;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 2, 2, 1, 4, 6};
    cout << "Minimum jumps: " << minJumps(arr) << endl;
    return 0;
}
