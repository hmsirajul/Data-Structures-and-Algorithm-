#include <iostream>
#include <cstring>
using namespace std;

void selectionSort(string arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)

    {
        int min_idx = i;

        for (int j = i + 1; j < size; ++j)

        {
            if (arr[j] < arr[min_idx])

            {
                min_idx = j;
            }
        }

        if (min_idx != i)

        {

            swap(arr[min_idx], arr[i]);
        }
    }
}

int main()

{
    cout << "Enter size of the array: ";
    int size;
    cin >> size;
    cout << "Enter " << size << " names:" << std::endl;
    string names[size];
    for (int i = 0; i < size; ++i)

    {
        cin >> names[i];
    }


    selectionSort(names, size);
    cout << "Sorted names:" << endl;
    for (int i = 0; i < size; ++i)

    {
        cout << names[i] << endl;
    }

    return 0;
}

