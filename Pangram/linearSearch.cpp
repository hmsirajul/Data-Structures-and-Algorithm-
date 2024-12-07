#include<bits/stdc++.h>
using namespace std;

int linearsrarch(int arr[], int size, int target)
{
    for (int i = 0; i<size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] ={5,8,9,1,2,5,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target ;
    cout << " : " ;

    cin >> target;

   int index = linearsrarch(arr,  size, target);

   if ( index != -1)
   {
    cout << index << endl;
   }
   else
   {
    cout << " " << endl;

   }
   

   return 0;


}