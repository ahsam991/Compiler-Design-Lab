#include<iostream>
#include<string>

using namespace std;

void Numeric_Constant(string s);

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    Numeric_Constant(str);
}

void Numeric_Constant(string s)
{
    int count = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(int(s[i]) >= 48 && int(s[i]) <= 57)
        {
            count++;
        }
    }

    if(count == s.length())
    {
        cout << "numeric constant";
    }

    else
    {
        cout << "not numeric";
    }
}
