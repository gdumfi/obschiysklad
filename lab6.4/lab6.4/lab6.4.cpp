#include<iostream>
#include<string>
#include<set>
#include<unordered_set>
using namespace std;

void enter_answer() 
{
    unordered_set <string> setName;
    unordered_set <double> res;
    string name;
    double last_size = 0;//ПОСЛЕДНЯЯ ВЕЛИЧИНА СЕТА
    while (true) 
    {
        cout << "Enter your name:" << endl;
        srand(time(NULL));
        double res_value = rand() % 10;
        cin >> name;
        last_size = setName.size();
        setName.insert(name);// ПРОВЕРКА НАЛИЧИЯ ИМЕНИ
        if (last_size < setName.size()) 
        {
            res.insert(res_value);
        }
        else {
            cout << "fuckup" << endl;
        }

        auto setName_it = setName.begin();
        auto res_it = res.begin();
        if (name == "0") 
        {
            while (setName_it != setName.end()) 
            {
                cout << *setName_it << " " << *res_it << endl;
                ++setName_it;
                ++res_it;
                if (++setName_it == setName.end()) 
                {
                    setName.clear();
                    res.clear();
                    break;
                }
            }
        }
    }

}
int main() {
    enter_answer();
}