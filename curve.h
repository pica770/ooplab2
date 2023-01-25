#pragma once
#include <cmath>

class curve
{
private:
	double r; //расстояние между фокусами
public:
	curve(double r);

	void set_r(double r);
	double get_r();

	double cur_r_fi(int fi);
	int cur_r();

	double calc_distance(int fi);
	double get_sector(int fi);
	double calc_area();
};
