#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    int i = 0;
    while (i < s.size())
    {
        while (i < s.size() && s[i] == ' ')
        {
            i++;
        }
        int start = i;
        while (i < s.size() && s[i] != ' ')
        {
            i++;
        }
        int end = i;
        for (int j = start; j < end; j++)
        {
            if (isdigit(s[j]) != 0)
            {
                for (int k = j + 1; k < end; k++)
                {
                    if (isdigit(s[k]) != 0 && s[j] < s[k])
                    {
                        char temp = s[j];
                        s[j] = s[k];
                        s[k] = temp;
                    }
                }
            }
        }
    }
    cout << "Результат: " << s << endl;
    return 0;
}
