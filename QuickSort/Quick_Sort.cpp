#include <bits/stdc++.h>
using namespace std;

int partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l;
    int j = h;
    while (i < j) {
        while (A[i] <= pivot && i < h) {
            i++;
        }
        while (A[j] > pivot && j > l) {
            j--;
        }
        if (i < j) {
            swap(A[i], A[j]);
        }
    }
    swap(A[l], A[j]);
    return j;
}

void quickSort(int A[], int l, int h) {
    if (l < h) {
        int j = partition(A, l, h);
        quickSort(A, l, j - 1);
        quickSort(A, j + 1, h);
    }
}

int main() {
    int A[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(A)/sizeof(A[0]);
    quickSort(A, 0, n-1);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
