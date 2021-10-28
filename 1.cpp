#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Rus");
    using namespace std;
    string chisla;
    ofstream fout;
    fout.open("stroka.txt");
    {
        fout << "апруг7ун4ш920" << endl;
    }
    fout.close();
    ifstream file;
    file.open("stroka.txt");
    getline(file, chisla);
    file.close();
    for (int i = 0; i < chisla.length(); i++)
    {
        if (chisla[i] >= '0' && chisla[i] <= '9')
            cout << chisla[i];
    }
}
