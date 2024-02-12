#include<iostream>
#include<set>
using namespace std;

  string concatenation ;
 char sting1[100],string2[100];

string SUBSTRING(string str, int initial, int length)
{
    string substr = str.substr(initial, length);
    return substr;
}

string DELETE(string text, int position, int length)
{
    string substr1 = SUBSTRING(text, 0, position);
    string substr2 = SUBSTRING(text, position + length, text.size() - position - length);
    concatenation = substr1 + substr2;



    return  concatenation;
}

int main()
{
    string str;
    int p, l;
    cin >> str >> p >> l;
    if (p < 0 || p > str.size())
        cout << str << endl;
    else
        cout << DELETE(str, p, l) << endl;
}
