#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;


int isupper(char letter)
{
    int res = 0;
    if (letter >= 'A' && letter <= 'Z')
        res = 1;

    return res;
}

int islower(char letter)
{
    int res = 0;
    if (letter >= 'a' && letter <= 'z')
        res = 1;

    return res;
 
}

char shifrovka(char letter, int key)
{
    if (isupper(letter))
    {
        letter += key;
        if ((int)letter > 90)
        {
            key = letter - 90;
            letter = 65 + key - 1;
        }
    }
    if (islower(letter))
    {
        letter += key;
        if ((int)letter > 122)
        {
            key = letter - 122;
            letter = 97 + key - 1;
        }
    }
    cout << letter;
    return letter;

}

void find_substring_in_string(char* str, char* substr)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        int j = 0;
        int save = i;
        while ((str[i] == substr[j]))
        {
            if (i == strlen(str))
            {
                break;
            }
            i++;
            j++;
        }
        if (j == strlen(substr))
        {
            cout << save << " ";

        }
        i = save;
    }
    cout << endl;

}

bool check_polindrom(char* str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
    }
    return true;
}







void task1()
{
    char str[256];
    cout << "Enter the word:\n";
    cin >> str;
    if (check_polindrom(str))
    {
        cout << "Polindrom" << endl;
    }
    else
    {
        cout << "Not polindrom" << endl;
    }
}

void task2()
{
    char str[256];
    char substr[256];
    cout << "Enter your string\n";
    cin >> str;
    cout << "Enter your substring\n";
    cin >> substr;

    find_substring_in_string(str, substr);
}

void task3()
{
    char ctroka[256];
    int key;
    int i;

    cout << "Enter your string\n";
    cin >> ctroka;
    cout << "Enter your key\n";
    cin >> key;
    cout << "Coding string\n ";

    for (i = 0; i < strlen(ctroka); i++)
    {
       shifrovka(ctroka[i], key);
    }
    cout << endl;
}

void task4()
{
    char ctroka[256];
    int j;
    cout << "Enter your string\n";
    cin >> ctroka;
    for (int i = 0; i < strlen(ctroka) - 1; i++) {
        if (ctroka[i] == '"') {
            j = i + 1;
            while (ctroka[j] != '"') {
                cout << ctroka[j];
                j++;
                i = j;
            }
            cout << endl;
        }
    }
}




int main()
{
    short choice = 0;
    while (true)
    {
        cout << "Choose number:\n1.Pallindom\n2.Find substring in string \n3.Caesar cipher \n4.Output word in quotes \n5.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            task1();
            break;
        }
        case 2:
        {
            task2();
            break;
        }
        case 3:
        {
            task3();
            break;
        }
        case 4:
        {
            task4();
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
}