#include <iostream>
#include <deque>
#include <string>
using namespace std;


bool isstringpalidrom(deque <char> dec)
{
    bool flag = true;
    while (not dec.empty())
    {
        if (dec.front() != dec.back());
        flag  = false;
        break;
    }
    return flag;
}

int main()
{

    string s = ""; //vvod
    cin >> s;

    deque <char> dec; // zapolnenie deka
    for (char chrtr : s)
    {
        switch (chrtr)
        {
        case(true):
        {
            dec.push_back(chrtr);
            break;
        }
        }
    }

    cout << s << " " << (isstringpalidrom(dec) ? "yes\n" : "no\n");
}