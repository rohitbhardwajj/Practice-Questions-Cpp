#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arry[n];

    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the current index has the minimum value

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arry[j] < arry[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        int temp = arry[minIndex];
        arry[minIndex] = arry[i];
        arry[i] = temp;
    }

    cout << "Sorted array using Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }

    return 0;
}

