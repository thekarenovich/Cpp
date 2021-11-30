#include <iostream>
#include <cstdlib>
using namespace std;
double a, b, c, h, r;

double PloshadPR(double a, double b)
{
	double result = a * b;
	return result;
}
double PloshadTR(double a, double h)
{
	double result1 = (a * h) / 2.0;
	return result1;
}
double PloshadKR(double r)
{
	double result2 = 3.14 * r * r;
	return result2;
}
int main()
{
	cin >> a >> b >> c >> h >> r;
	cout << "Something" << endl;
	double result = PloshadPR(a, b);
	double result1 = PloshadTR(a, h);
	double result2 = PloshadKR(r);
	cout << result << " " << result1 << " " << result2 << endl;
}
