#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "cOOOOOOOut" << endl;
	
	double a, b, c, d, e, f, g, h, i, j;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
	{
		ofstream F1("f.txt");
		F1 << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << j;
		F1.close();
	}
	ifstream F2("f.txt");
	do
	{
		F2 >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
	} 
	while (!F2.eof());
	cout << a + b + c + d + e + f + g + h + i + j << endl;
	F2.close();
	return 0;
}
