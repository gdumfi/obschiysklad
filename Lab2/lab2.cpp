#include <iostream> 
using namespace std;

void task1()
{
    int num;
    int x1 = 0;
    int x = -1;
    cout << "Enter number of string:";
    cin >> num;
    while (x1 != num)
    {
        while (x != x1)
        {
            x++;
            cout << x;
        }
        x = -1;
        x1++;
        cout << "\n";
    }

    cout << "\n";



}

void task2()
{
    int n = 0;
    cout << "enter n:";
    cin >> n;

    double cnk = 1;
    for (int k = 1; k <= n; k++)
    {
        cout << cnk << " ";
        cnk = cnk * (n - (k - 1)) / (k);
    }
    cout << cnk << endl;
}



void task3()
{
    int num = 1;
    float cnt = 0;
    int result = 0;
    cout << "Enter numbers:";
    while (num != 0)
    {
        cin >> num;
        cnt++;
        result = result + num;
    }
    cout << "result:" << result / cnt << "\n";
}








int main()
{
    short choice = 0;
    while (true)
    {
        cout << "Choose number:\n1.Nubmer triangle\n2.Binomial coefficient\n3.Arithmetic average\n4.Exit\n";
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