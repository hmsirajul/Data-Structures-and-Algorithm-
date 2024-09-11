#include <bits/stdc++.h>
using namespace std;

void Heapify(int arr[], int i, int H) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;


    if (left < H && arr[left] > arr[largest]) {
        largest = left;
    }


    if (right < H && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        Heapify(arr, largest, H);
    }
}


int main() {

    int arr[] = { 3, 5, 9, 6, 8, 20, 10, 12, 18, 9 };
    int N = sizeof(arr) / sizeof(arr[0]);

     for (int i = (N - 2) / 2; i >= 0; i--)

     {
        Heapify(arr, i, N);
     }



    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
