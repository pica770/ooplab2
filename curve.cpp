#include "curve.h"

curve::curve(double r)
{
	this->r = r;
}

void curve::set_r(double r)
{
	this->r = r;
}

double curve::get_r()
{
	return r;
}

double curve::calc_distance(int fi)
{
	float dis = sqrt(2 * (r / 2) * cos(2 * fi));
	return dis;
}

double curve::cur_r_fi(int fi)
{
	int dis = sqrt(2 * (r / 2) * (r / 2) * cos(2 * fi));
	return dis;
}

/*int curve::cur_r()
{
	int rad = (2 * (r / 2) * (r / 2)) / (3 * );
	return rad;
}
*/

double curve::get_sector(int fi)
{
	double s = (r / 2) * (r / 2) / (2 * sin(2*fi));
	return s;
}

double curve::calc_area()
{
	return r * r;
}
