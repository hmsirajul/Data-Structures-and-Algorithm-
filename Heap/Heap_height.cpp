#include<bits/stdc++.h>
using namespace std;

int findHeapHeight(int n)
{
    if (n == 0) {
        return -1;
    }

    int height = 0;

    while (n > 1) {
        n /= 2;
        height++;
    }

    return height;
}

int main() {
    int n = 6;

    cout << findHeapHeight(n) << endl;

    return 0;
}

