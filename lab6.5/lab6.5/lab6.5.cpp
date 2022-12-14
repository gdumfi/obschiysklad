#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string word;
    map<string, int> counter;
    double cnt=0;
    while (cin >> word)
    {
        ++cnt;
        counter[word]++;
    }

    map <string, int> ::iterator iter;

    for (iter = counter.begin(); iter != counter.end(); ++iter)
        cout << iter->first << ':' << iter->second << "    " << ((iter->second)/cnt)*100 << "%" << endl;

    return 0;
}

/*
import random


with open('rendw', 'r') as file:
    words = file.readlines()
    words = [s.strip("\n") for s in words]
    for k in range(100):
        print(random.choice(words), end=" ")

*/
