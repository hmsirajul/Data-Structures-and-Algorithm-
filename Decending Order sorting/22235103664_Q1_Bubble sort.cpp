#include <iostream>
using namespace std;

void bubbleSort_Descending(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubbleSort_Descending(values, size);
    cout << "Descending order: ";
    for (int i = 0; i < size; ++i)
    {
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}
