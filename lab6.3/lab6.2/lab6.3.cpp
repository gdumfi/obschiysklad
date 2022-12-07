#include <iostream>
#include <queue>
using namespace std;
double* ququs(int n)
{
    double* a = new double[n];
    queue <double> q2;//sozdala óchered
    queue <double> q3;
    queue <double> q5;

    q2.push(2);// pervble  nums
    q3.push(3);
    q5.push(5);

    for (int i = 0; i < n; i++)
    {
        if (q2.front() < q3.front() and q2.front() < q5.front()) { // ecli ocheredi c 2koq naimen'shaya
            q2.push(2 * q2.front());
            q3.push(3 * q2.front());
            q5.push(5 * q2.front());
            a[i] = q2.front();
            q2.pop();

        }
        if (q3.front() < q2.front() and q3.front() < q5.front()) {// ecli ocheredi c 3koq naimen'shaya
            q2.push(2 * q3.front());
            q3.push(3 * q3.front());
            q5.push(5 * q3.front());
            a[i] = q3.front();
            q3.pop();
        }
        if (q5.front() < q3.front() and q5.front() < q2.front()) {// ecli ocheredi c 5koq naimen'shaya
            q2.push(2 * q5.front());
            q3.push(3 * q5.front());
            q5.push(5 * q5.front());
            a[i] = q5.front();
            q5.pop();

        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    return a;
    delete[] a;
}
int main()
{
    int n;
    cin >> n; //kol-vo num
    ququs(n);
}
// verdict: .pop() ne cdvigaet ocheredi i neponyatno pochemu