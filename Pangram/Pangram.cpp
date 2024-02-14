///**** TheQuickBrownFoxJumpsOverTheLazyDog /*****
/// Apply this for input.....

#include <iostream>
using namespace std;

int main()
{
    string str;
    int cnt = 0;
    cin >> str;

    // Convert uppercase letters to lowercase
    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    bool alphabet[26] = {false};

    // Count the occurrence of each letter
    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            if (!alphabet[index])
            {
                alphabet[index] = true;
                cnt++;
            }
        }
    }

    if (cnt == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
