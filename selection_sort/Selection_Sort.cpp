#include<iostream>
using namespace std;
void display(int arr[], int n)
{
    for ( int i=0; i<n; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
}
int main ()
{
    int n = 5;
    int arr[n] = {17,11,9,10,12};
    cout << "Before Sorting  : " << endl;
    display(arr,n);
    int midIndex;
    for (int i=0; i<n;i++)
    {
        midIndex = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]< arr[midIndex])
            {
                midIndex =j;
            }
        }
        if (midIndex!=i)
        {
            swap(arr[midIndex],arr[i]);
        }
        cout <<"After Step  " << i+1 << " : " << endl;
        display(arr,n);
    }
    cout << "After Sorting : \n";
    display(arr,n);

    return 0;
}

