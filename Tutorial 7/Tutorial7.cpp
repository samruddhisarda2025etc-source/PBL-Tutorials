nclude <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char str[100];

public:

    String()
    {
        str[0] = '\0';
        cout << "Constructor called" << endl;
    }

    String(const char s[])
    {
        strcpy(str, s);
        cout << "Parameterized constructor called" << endl;
    }

    ~String()
    {
        cout << "Destructor called" << endl;
    }

    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    void Display()
    {
        cout << "String = " << str << endl;
    }
};

int main()
{
    String s1;

    s1.Accept();
    s1.Display();

    String s2("Hello C++");
    s2.Display();

    return 0;
}
