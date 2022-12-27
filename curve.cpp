#include "curve.h"

curve::curve(double r, int fi)
{
	this->r = r;
	this->fi = fi;
}

void curve::set_r(double r)
{
	this->r = r;
}

void curve::set_fi(int fi)
{
	this->fi = fi;
}

double curve::get_r(int fi, double r)
{
	int dis = sqrt(2 * (r / 2) * (r / 2) * cos(2 * fi));
	return dis;
}

int curve::get_rad(int fi, double r)
{
	int rad = abs(2 * (r / 2) / (3 * sqrt(2 * cos(2 * fi))));
	return rad;
}

double curve::calc_distance(int fi, double r)
{
	float dis = sqrt(2 * (r / 2) * cos(2 * fi));
	return dis;
}

double curve::calc_area(double r)
{
	return r * r;
}
