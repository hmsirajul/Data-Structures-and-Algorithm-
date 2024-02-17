#include <iostream>
using namespace std;

void selectionSort_Descending(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)

    {
        int max_index = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }
        if (max_index != i)
        {
            swap(arr[i], arr[max_index]);
        }
    }
}

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int values[size];
    cout << "Enter " << size << " values: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> values[i];
    }
    selectionSort_Descending(values, size);

    cout << " Descending order: ";
    for (int i = 0; i < size; ++i)

    {
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}
