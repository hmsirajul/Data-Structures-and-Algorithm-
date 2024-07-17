#include<iostream>
using namespace std;
void dispalay ( int arr[], int n)
{
    for (int i = 0 ; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main ()
{
    int n = 5;
    int arr[n] = {17,13,9,18,12};

    cout << "Before Sorting : " << endl;
    dispalay(arr,n);
    cout << endl;
    int key , j;
    for ( int i = 1; i<n ; i++)
    {
        key = arr[i];
        j= i-1;
    
    while (j>=0 && arr[j]>key)
    {
        arr[j+1] = arr[j];
        j = j-1;
    }
    arr[j+1] = key;
    cout <<" After step  " << i << " : " <<  endl;
    dispalay(arr,n);

    }
    cout <<"\nAfter Sortin : " << endl;
    dispalay (arr,n);
    return 0;
    
}