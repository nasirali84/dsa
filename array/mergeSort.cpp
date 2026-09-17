#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    // Compare both halves
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        }
        else {
            temp.push_back(arr[j++]);
        }
    }

    // Remaining elements of left half
    while (i <= mid)
        temp.push_back(arr[i++]);

    // Remaining elements of right half
    while (j <= end)
        temp.push_back(arr[j++]);

    // Put sorted elements back into arr
    for (int i = st; i <= end; i++) {
        arr[i] = temp[i - st];
    }
}

void mergeSort(vector<int> &arr, int st, int end) {

    if (st >= end)
        return;

    int mid = (st + end) / 2;

    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, st, mid, end);
}

int main() {
    vector<int> arr = {5, 3, 4, 1, 2};

    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr) {
        cout << x << " ";
    }
}