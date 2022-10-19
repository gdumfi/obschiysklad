#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main()
{
    int c;
    char string[10];
    int key;
    printf("Введите строку (без пробелов длинною максимум 50 символов): ");
    gets(string);
    printf("Введите ключ (число сдвигов букв): ");
    scanf("%d", &key);

    int i;
    for (i = 0; i < 50; i++)
    {
        string[i] = encryption(string[i], key);
    }
    printf("\nШифрованная строка: ");
    puts(string);
    getch();
    return 0;
}

int isUpper(char letter)
{
    int result = 0;

    if (letter >= 'А' && letter <= 'Я')
        result = 1;

    return result;
}

int isLower(char letter)
{
    int result = 0;
    // Если символ больше либо равен 'а' и меньше либо равна 'я', то вернуть 1(true)
    if (letter >= 'а' && letter <= 'я')
        result = 1;

    return result;
}

char encryption(char letter, int key)
{
    if (isUpper(letter))
    {
        letter += key;
        if ((int)letter > 90)
        {
            key = letter - 90;
            letter = 65 + key - 1;
        }
    }
    if (isLower(letter))
    {
        letter += key;
        if ((int)letter > 122)
        {
            key = letter - 122;
            letter = 97 + key - 1;
        }
    }
    return letter;
}
