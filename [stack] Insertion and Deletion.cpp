#include <iostream>
using namespace std;

const int max_size = 1000;

int ar[max_size];
int top = 0;

void push(int val)
{
    if (top == max_size)

    {
        cout << "overflow" << endl;
        return;
    }
    ar[top++] = val;
}


int pop() {
    if (top == 0)
    {
        cout << "underflow" << endl;
        return -1;
    }
    return ar[--top];
}

int main()

{
    int N, T;
    cin >> N >> T;

    for (int i = 0; i < T; i++)
    {
        int operation;
        cin >> operation;

        if (operation == 1)
        {
            int val;
            cin >> val;
            push(val);
        } else if (operation == 2)
        {
            int popped_item = pop();
            if (popped_item != -1)
            {
                cout << "Popped item: " << popped_item << endl;
            }
        }
        else

        {
            cout << "Please enter operation" << endl;
        }

        if (top == 0)
        {
            cout << "(size= 0 ; items= NULL)" << endl;
        }
        else

        {
            cout << " (size= " << top << ", items =  )";
            for (int j = 0; j < top ; j++)
            {
                cout << ar[j] << " ";
            }
        }
    }

    return 0;
}
