#include <iostream>
#include <cstring>
using namespace std;

int i, j;
int flag;
void bubbleSort(string arr[], int size)
{
    for (i = 0; i < size - 1; ++i)

        flag = false;

    {

        for ( j = 0; j < size - 1 ; ++j)

        {
            if  (arr[j] < arr[j+1])
            {

                swap (arr[j+1], arr[j]);
                 flag = true ;
            }

        if( flag == false )

        {

               break;
        }

        }

    }
}

int main()

{
    cout << "Enter size of the array: ";
    int size;
    cin >> size;
    cout << "Enter " << size << " names:" << endl;
    string names[size];
    for (int i = 0; i < size; ++i)

    {
        cin >> names[i];
    }

     bubbleSort(names, size);
    cout << "Sorted names:" << endl;
    for (int i = 0; i < size; ++i)

    {
        cout << names[i] << endl;
    }

    return 0;
}

