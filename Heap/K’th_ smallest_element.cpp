#include <bits/stdc++.h>
using namespace std;

int K_element(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int smallerCount = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
                smallerCount++;
        }

        
        if (smallerCount == k - 1)
            return arr[i];
    }

    return -1;  
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int m = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

   
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    cout << K_element(arr, m, k) << endl;

    return 0;
}
