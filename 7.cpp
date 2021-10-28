#include <iostream>
#include <math.h>
using namespace std;
void main()
{
    double f, a;
    const int X = 197, Y = 51; // размер осей координат 197x51
    char arr[X][Y]; // множество точек
    
    for (int y = 0; y < Y; y++)//делаем массив пустым
    {
        for (int x = 0; x < X; x++)
        {
            arr[x][y] = ' ';
        }
    }

    
    int k = 13; // коэффициент увеличения
    for (a = -4.4; a < 4.4; a += 0.001)
    {
        f = sin(a);
        arr[X / 2 + int(round(a * k))][Y / 2 + int(round(f * k))] = '*';
    }

   
    for (int y = 0; y < Y; y++) //строим оси
    {
        for (int x = 0; x < X; x++)
        {
            if (x == X / 2) 
                arr[x][y] = '|';
            if (y == Y / 2) 
                arr[x][y] = '-';
            if ((x == X / 2) && (y == Y / 2)) 
                arr[x][y] = 'o';
        }
    }
    
    for (int y = 0; y < Y; y++)
    {
        for (int x = 0; x < X; x++)
        {
            cout << (arr[x][y]);
        }
    }
}
