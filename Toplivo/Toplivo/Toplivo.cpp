#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".1251");
	double km, rt, fuel, price;
	cout << "Введите значение km: ";
	cin >> km;
	cout << "Введите значение rt: ";
	cin >> rt;
	cout << "Введите значение fuel: ";
	cin >> fuel;
	price = rt / 100 * km * fuel;
	cout << price << endl;
	system("PAUSE");
	return 0;
}
