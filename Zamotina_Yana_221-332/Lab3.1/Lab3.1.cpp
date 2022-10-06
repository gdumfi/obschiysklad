#include <iostream>

using namespace std;

void sort_task1(int* arr, int size)
{
    int x;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }

}


void sort_task2(char* arr, int size)
{
    int mass[int('z') + 1] = { 0 };

    for (int i = 0; i < size; i++)
    {
        for (int j = int('a'); j <= 'z'; j++)
        {
            if (int(arr[i]) == j)
            {
                mass[j] += 1;
                break;
            }
        }

    }

    for (int i = int('a'); i <= 122; i++)
    {
        for (int j = mass[i]; j > 0; j--)
        {
            cout << char(i) << " ";
        }
    }
    cout << "\n";
}


void sort_task3(int* arr, int size)
{

}






void task1()
{
    int arr[1000];
    int size = 0;
    cout << "Enter size of your array \n";
    cin >> size;
    cout << "Enter your massive \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort_task1(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    delete[] arr;
}

void task2()
{
    char arr[1000];
    int size = 0;
    int cnt = 0;
    cout << "Enter size of your array \n";
    cin >> size;
    cout << "Enter your massive \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort_task2(arr, size);

    delete[] arr;
}

void task3()
{

}










int main()
{
    short choice = 0;
    while (true)
    {
        cout << "Choose number:\n1.Bubble sort\n2.Char sort \n3.Merge sort \n4.Exit\n";
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