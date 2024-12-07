#include<bits/stdc++.h>
using namespace std;

int BinarySearch (int arr[], int size, int target)
{
    int left = 0; int right = size -1;
    while ( left<= right)
    {
        int mid = left + (left - right)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            left = mid +1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
    
}


int main ()
{
    int arr[] = { };
    int size = sizeof(arr)/ sizeof(arr[0]);
    int target;

    cout << " :: " ;
    cin >> target;

    int index = BinarySearch (arr, size, target) ;
    if ( index != -1)
    {
        cout << " " << index << endl;

    }
    else
    cout << " Null : ";

    return 0;
}