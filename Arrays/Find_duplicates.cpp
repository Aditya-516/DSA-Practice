#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    for (int i = 0; i < arr.size(); i++) {
        if (seen.find(arr[i]) != seen.end()) {
            duplicates.insert(arr[i]);
        } else {
            seen.insert(arr[i]);
        }
    }

    return vector<int>(duplicates.begin(), duplicates.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 6, 3, 2};
    vector<int> duplicates = findDuplicates(arr);

    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
