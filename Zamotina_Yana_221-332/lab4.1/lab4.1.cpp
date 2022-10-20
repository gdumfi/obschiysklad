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








void task1()
{

}

void task2()
{


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
    char ctroka[100];
    cin.getline(ctroka, strlen(ctroka));
    const char* result = strchr(ctroka, '\"');
    const char* result_new = strrchr(result, '\"');
    cout << result_new;
}




int main()
{
    short choice = 0;
    while (true)
    {
        cout << "Choose number:\n1.Pallindom\n2.Find substring in string \n3.Caesar cipher \n4.Output word in "" \n5.Exit\n";
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