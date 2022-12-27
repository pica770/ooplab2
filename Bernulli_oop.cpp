#include <iostream>
#include "curve.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Введите расстояние между фокусами: ";
	double r;
	cin >> r;

	cout << "Введите угол: ";
	int fi;
	cin >> fi;

	curve cur(r, fi);
	int action;

	do
	{
		cout << "0.Ввести координаты" << endl;
		cout << "1.Изменить расстояние между фокусами" << endl;
		cout << "2.Изменить угол" << endl;
		cout << "3.Получить информацию и параметрах кривой" << endl;
		cout << "4.Получить расстояние до центра" << endl;
		cout << "5.Получить радиус кривизны" << endl;

		cin >> action;

		switch (action)
		{
		case 1:
		{
			cout << "Введите расстояние: ";
			cin >> r;
			cur.set_r(r);
			break;
		}
		case 2:
		{
			cout << "Введите угол: ";
			cin >> fi;
			cur.set_fi(fi);
			break;
		}
		case 3:
		{
			cout << "Информация о параметрах кривой: ";
			cout << "\nУгол: " << fi << "\nРасстояние между фокусами: " << r << "\n";
			break;

		}
		case 4:
		{
			double dis = cur.get_r(fi, r);
			cout << "Расстояние до центра: " << dis << "\n";
			break;
		}
		case 5:
		{
			int rad = cur.get_rad(fi, r);
			cout << "Радиус кривизны: " << rad << "\n";
			break;

		}
		default:
			break;
		}
	} while (true);
}
