#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;
string file_ex(const string path)
{
	int pos = path.rfind(".");

	return path.substr(pos + 1);
}


string file_name(const string path)
{
	string p2 = path.substr(path.rfind("\\") + 1);
	int pos = p2.rfind(".");
	return p2.substr(0, pos);


}

string file_path(const string path)
{
	int pos = path.rfind("\\");
	return path.substr(0, pos);
}

string file_disk(const string path)
{
	int pos = path.find(":");
	return path.substr(0, pos);
}

string file_rename(const string path)
{
	string new_name = "";
	cout << "Enter new name:\n";
	cin >> new_name;
	return file_path(path) + "\\" + new_name + "." + file_ex(path);
}

bool file_copy(const string path)
{
	ifstream fin(path);
	if (!fin.is_open()) return false;
	else
	{
		string new_path = file_path(path) + "\\" + file_name(path) + "_copy." + file_ex(path);
		ofstream fout(new_path);
		if (!fout.is_open()) return false; 
		char temp[256];
		while (fin) {
			fin.getline(temp, sizeof(temp));
			fout << temp << endl;
		}
		fin.close();
		fout.close();
	}
	return true;

}



void task1(string path)
{
	cout << file_ex(path) << endl;
}

void task2(string path)
{
	cout << file_name(path) << endl;
}

void task3(string path)
{
	cout << file_path(path) << endl;
}

void task4(string path)
{
	cout << file_disk(path) << endl;
}

void task5(string path)
{
	cout << file_rename(path) << endl;
}

void task6(string path)
{
	cout << file_copy(path) << endl;
	if (file_copy(path))
	{
		cout << "yaeh\n";
	}
	else
	{
		cout << "neh\n";
	}
}





int main()
{

	short choice = 0;
	while (true)
	{
		string a;
		cout << "Enter your string:\n";
		getline(cin, a);
		cout << "Choose your programm\n" << "1.Output extension \n" << "2.Output filemame \n" << "3.Output path\n" << "4.Output disk\n" << "5.Rename file\n" << "6.Do copy\n" << "7.Exit\n" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1: {
			task1(a);
			cin.get();
			break;
		}

		case 2: {
			task2(a);
			cin.get();
			break;
		}

		case 3: {
			task3(a);
			cin.get();
			break;
		}
		case 4: {
			task4(a);
			cin.get();
			break;
		}
		case 5: {
			task5(a);
			cin.get();
			break;
		}
		case 6: {
			task6(a);
			cin.get();
			break;
		}
		default:
			return 0;
		}
	}
}