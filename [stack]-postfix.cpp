#include <iostream>
#include <stack>
#include <string>

using namespace std;

int Postfix(const string& expression)
{
    stack<int> stack;
    int operand1, operand2;

    for (char ch : expression)
    {
        if (isdigit(ch))
        {
            stack.push(ch - '0');
        } else {
            operand2 = stack.top();
            stack.pop();
            operand1 = stack.top();
            stack.pop();

            switch (ch)
            {
                case '+':
                    stack.push(operand1 + operand2);
                    break;
                case '-':
                    stack.push(operand1 - operand2);
                    break;
                case '*':
                    stack.push(operand1 * operand2);
                    break;
                case '/':
                    stack.push(operand1 / operand2);
                    break;
            }
        }
    }

    return stack.top();
}

int main()
{
    string expression;
    getline(cin, expression);

    int result = Postfix(expression);
    cout << "Result: " << result << endl;

    return 0;
}
