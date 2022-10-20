#include <iostream>

using namespace std;

void sort_for_4(int *mass,int size)
{
    int x;
    int y;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mass[j] % 10 > mass[j + 1] % 10) {
                x = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = x;
            }
            if (mass[j] % 10 == mass[j + 1] % 10)
            {
                if (mass[j] < mass[j + 1])
                {
                    y = mass[j];
                    mass[j] = mass[j + 1];
                    mass[j + 1] = y;
                }
            }
        }
    
    }
}



void task1(int *&mass,int &size)
{
    cout << "Enter size:\n";
        cin >> size;

        mass = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> mass[i];

        }
        
}

void task2(int *mass,int size)
{
    for (int i = 0; i < size; i++)
        cout << mass[i] << " ";
    cout << endl;

    delete[] mass;
    
}

void task3()
{

}


void task4(int *mass, int size)
{
    sort_for_4(mass,size);

    for (int i = 0; i < size; i++)
    {
        cout << mass[i] << " ";
    }
    cout << "\n";

    delete[] mass;

}










int main()
{
    int* mass0 = nullptr;
    int mass_size = 0;


    short choice = 0;
    while (true)
    {
        cout << "Choose number:\n1.Enter your mass\n2.See your mass \n3.Sort numbers on even positions\n4.Sort numbers on last digit\n5.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            task1(mass0, mass_size);
            break;
        }
        case 2:
        {
            task2(mass0,mass_size);
            break;
        }
        case 3:
        {
            task3();
            break;
        }
        case 4:
        {
            task4(mass0,mass_size);
            break;
        
        }
        default:
        {
            return 0;
        }
        }
    }
}