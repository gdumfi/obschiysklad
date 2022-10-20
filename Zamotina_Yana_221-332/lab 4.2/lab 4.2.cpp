#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;

void string_file_format(const string file_path_full)
{
}









void task1()
{

}

void task2()
{


}

void task3()
{

}

void task4()
{
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