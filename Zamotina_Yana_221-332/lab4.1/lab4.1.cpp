#include <iostream>
#include <cstring>
using namespace std;

void task1()
{

}

void task2()
{
    int len_substr;
    char stroka;
    char podstroka;
    cout << "Enter lenght of your substring";
    cin >> len_substr;

    cout << "Enter your string";
    cin >> stroka;

    cout << "Enter your substring";
    cin >> podstroka;

    for (int i = 0; i < strlen(stroka); i++)
    {

    }

    

}

void task3()
{

}




int main()
{
    short choice = 0;
    while (true)
    {
        cout << "Choose number:\n1.Pallindom\n2.Find substring in string \n3.Сaesar cipher \n4.Exit\n4.Exiыt";
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
        default:
        {
            return 0;
        }
        }
    }
}