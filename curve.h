#pragma once
#include <cmath>

class curve
{
private:
	double r; //расстояние между фокусами
	int fi; //угол

public:
	curve(double r, int fi);

	void set_r(double r);
	void set_fi(int fi);

	double get_r(int fi, double r);
	int get_rad(int fi, double r);

	double calc_distance(int fi, double r);
	double calc_area(double r);
};

