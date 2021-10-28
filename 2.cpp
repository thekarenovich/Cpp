#include <iostream>
using namespace std;

int main()
{
    int temp;
    char str[30] = { 'A','b','K','d','c','l','z','a','P','r','F','G','r','Q', 'M', 'C', 'Z', 'F', 'T','N' };
    for (int i = 0; i < 30 - 1; i++) {
        for (int j = 0; j < 30 - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 30; i++) {
        cout << str[i];
    }

}
