#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double v, t;
	double a, rad;
	int g = 10;
	cout << "Введите v:=";
	cin >> v;
	cout << "Введите T:=";
	cin >> t;
	a = (asin((g * t) / (2 * v)));
	cout << "Альфа равно: " << a << "\n";
	return 0;
}
