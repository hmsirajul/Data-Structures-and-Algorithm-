#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;

    stack<string> s_Stack;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());
        s_Stack.push(s);
    }

    while (!s_Stack.empty())
    {
        s_Stack.pop();
    }

    return 0;
}

