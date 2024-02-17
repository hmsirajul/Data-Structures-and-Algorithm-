#include <iostream>
using namespace std;

void insertionSortDescending(int arr[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
     int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int values[size];
    cout << "Enter " << size << " values: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> values[i];
    }
    insertionSortDescending(values, size);

    cout << "Array sorted in descending order: ";
    for (int i = 0; i < size; ++i)
    {
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}

