#include <cstring>
#include <iostream>
using namespace std;



int main()
{
    int c;
    char string[100];
    int key;
    cout << "Введите строку: ";
    scanf_s(string);
    cout << "Введите ключ: ";
    cin >> key;

    int i;
    for (i = 0; i < 50; i++)
    {
        string[i] = vvod(string[i], key);
    }
    cout << "\nШифрованная строка: ";
    cout << string;
}

int isUpper(char letter)
{
    int result = 0;
    if (letter >= 'А' && letter <= 'Я')
        result = 1;

    return result;
}

int isLower(char letter)
{
    int result = 0;
    if (letter >= 'а' && letter <= 'я')
        result = 1;

    return result;
}

char vvod(char letter, int key)
{
    if (isUpper(letter))
    {
        letter += key;
        if ((int)letter > 90)
        {
            key = letter - 90;
            letter = 65 + key - 1;
        }
    }
    if (isLower(letter))
    {
        letter += key;
        if ((int)letter > 122)
        {
            key = letter - 122;
            letter = 97 + key - 1;
        }
    }
    return letter;
}
