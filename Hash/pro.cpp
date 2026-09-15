#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};

    // Count frequency
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cout << "Enter number: ";
        cin >> number;

        cout << "Frequency: " << hash[number] << endl;
    }

    return 0;
}