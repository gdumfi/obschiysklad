#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;

string file_format(const string file_path_full)
{
}

string file_name(const string file_path_full)
{
}

string file_path(const string file_path_full)
{
}

char file_disk(const string file_path_full)
{
}

bool file_rename(string* file_path_full)
{
}

bool file_copy(const string file_path_full)
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

void task5()
{
}

void task6()
{
}




int main()
{
    short choice = 0;
    while (true)
    {
        cout << "Choose number:\n1.Output filename extension\n2.Output filename\n3.Output path\n4.Output name of disk\n5.Rename\n6.Copy file\n";
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
        case 5:
        {
            task5();
            break;
        }
        case 6:
        {
            task6();
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
}