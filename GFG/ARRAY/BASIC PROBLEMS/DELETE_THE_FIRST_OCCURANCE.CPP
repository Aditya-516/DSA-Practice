#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to delete: ";
    cin >> key;

    int pos = -1;
    // find first occurrence
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Element not found!" << endl;
    } else {
        // shift elements left
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size

        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
