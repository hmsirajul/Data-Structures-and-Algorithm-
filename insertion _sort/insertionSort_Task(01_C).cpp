#include <iostream>
#include<cstring>
using namespace std;

int i, j;
void insertionSort(string arr[], int size)

{
    for ( i = 1; i < size; ++i)

    {
        string key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)

        {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }
}

int main()

{
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    cout << "Enter " << size << " names:" <<endl;
    string names[size];
    for (i = 0; i < size; ++i)

    {
        cin >> names[i];
    }

    insertionSort(names, size);
    cout << "Sorted names:" << endl;
    for ( i = 0; i < size; ++i)

    {
        cout << names[i] << endl;
    }

    return 0;
}
