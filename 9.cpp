#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    srand(time(0));
    int s = rand();

    int m, c, i;
    cin >> m >> c >> i;

    for (int j = 0; j < i; j++) {
        cout << ((m * s + i) % c) << endl;
        s = ((m * s + i) % c);
    }
}
