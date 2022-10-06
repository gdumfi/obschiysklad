
#include <iostream>
#include <bitset>

using std::endl;
using std::cout;
using std::cin;

int main()
{
    cout << "Yana Zamotina_221-332" << std::endl;

    cout << "min int = " << (int)0b10000000000000000000000000000000 << ", max int = " << (int)0b01111111111111111111111111111111 << ", size of int = " << sizeof(int) << std::endl;
    cout << "min unsigned int = " << (unsigned int)0 << ", max unsigned int = " << (unsigned int)0b11111111111111111111111111111111 << ", size of unsigned int = " << sizeof(unsigned int) << std::endl;
    cout << "min short = " << (short)0b1000000000000000 << ", max short = " << (short)0b0111111111111111 << ", size of short = " << sizeof(short) << std::endl;
    cout << "min unsigned short = " << (unsigned short)0 << ", max unsigned short = " << (unsigned short)0b1111111111111111 << ", size of unsigned short = " << sizeof(unsigned short) << std::endl;
    cout << "min long = " << (long)0b10000000000000000000000000000000 << ", max long = " << (long)0b01111111111111111111111111111111 << ", size of long = " << sizeof(long) << std::endl;
    cout << "min long long = " << (long long)0b1000000000000000000000000000000000000000000000000000000000000000 << ", max long long = " << (long long)0b0111111111111111111111111111111111111111111111111111111111111111 << ", size of long long = " << sizeof(long long) << std::endl;
    cout << "min double = -" << (double)0b1000000000000000000000000000000000000000000000000000000000000000 << ", max double = " << (double)0b0111111111111111111111111111111111111111111111111111111111111111 << ", size of double = " << sizeof(double) << std::endl;
    cout << "min char = " << (char)0b10000000 << ", max char = " << (char)0b01111111 << ", size of char = " << sizeof(char) << std::endl;
    cout << "min bool = " << (bool)0 << ", max bool = " << (bool)0b01111111 << ", size of bool = " << sizeof(bool) << std::endl;

    int num1;
    cout << "Enter" << std::endl;
    cin >> num1;
    cout << "Binary =" << std::bitset<32>(num1) << std::endl;
    cout << "Hex =" << std::hex << num1 << std::endl;
    cout << "bool " << bool(num1) << std::endl;
    cout << "double " << double(num1) << std::endl;
    cout << "char " << char(num1) << std::endl;


    double a;
    double b;
    cin >> a >> b;
    cout << "x= " << b / a << std::endl;

    int x1;
    int x2;
    cin >> x1;
    cin >> x2;
    cout << "middle of segment: " << (x2 - x1) / 2 + x1 << std::endl;
}