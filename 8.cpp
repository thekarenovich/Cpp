#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int e=0;
    char str[100];
    for (int i = 0; i < 100; i++)
        str[i] = NULL;

    cout << "enter number = ";
    cin.getline(str, 100);
    
    for (int i = 0; i < strlen(str); i++) // проверка на три одинаковых числа
    {
        if (str[i] == str[i+1] == str[i+2])
        {
            e++;
        }
    }

    if (e > 0)
    {
        cout << "Ошибка введены три одинаковых символа" << endl;
        exit(1);
    }

    int number = 0;
    for (int i = 0; i < 100; i++) // проверка и подсчет чисел, относительно позиции в которой они стоят
    {
        if (str[i] == NULL)
            break;

        switch (str[i])
        {
        case 'I':
            if (i + 1 < strlen(str) && (str[i + 1] == 'V' || str[i + 1] == 'X' || str[i + 1] == 'C' || str[i + 1] == 'M'))
                number = number - 1;
            else number = number + 1;
            break;

        case 'V':
            number = number + 5;
            break;

        case 'X':
            if (i + 1 < strlen(str) && (str[i + 1] == 'L' || str[i + 1] == 'C' || str[i + 1] == 'M'))
                number = number - 10;
            else number = number + 10;
            break;

        case 'L':
            number = number + 50;
            break;

        case 'C':
            if (i + 1 < strlen(str) && (str[i + 1] == 'D' || str[i + 1] == 'M'))
                number = number - 100;
            else number = number + 100;
            break;

        case 'D':
            number = number + 500;
            break;

        case 'M':
            number = number + 1000;
            break;
        }
    }
    cout << number << endl;
}
