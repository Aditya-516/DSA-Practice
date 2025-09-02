#include<iostream>
using namespace std;

// Define a structure to hold min and max values
struct Pair {
    int min;
    int max;
};

Pair GetMinMax(int arr[], int size) {
    Pair result;
    int i;

    // If array size is even
    if(size % 2 == 0) {
        if(arr[0] > arr[1]) {
            result.max = arr[0];
            result.min = arr[1];
        } else {
            result.max = arr[1];
            result.min = arr[0];
        }
        i = 2; // Start from index 2
    }
    // If array size is odd
    else {
        result.max = arr[0];
        result.min = arr[0];
        i = 1; // Start from index 1
    }

    // Process elements in pairs
    while(i < size - 1) {
        if(arr[i] > arr[i+1]) {
            if(arr[i] > result.max)
                result.max = arr[i];
            if(arr[i+1] < result.min)
                result.min = arr[i+1];
        } else {
            if(arr[i+1] > result.max)
                result.max = arr[i+1];
            if(arr[i] < result.min)
                result.min = arr[i];
        }
        i += 2; // Move to the next pair
    }

    return result;
}

int main() {
    int size = 10;
    int arr[size] = {25, 48, 36, 78, 24, 95, 16, 38, 59, 89};

    cout << "Array: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Pair ans = GetMinMax(arr, size);
    cout << "Minimum: " << ans.min << endl;
    cout << "Maximum: " << ans.max << endl;

    return 0;
}
