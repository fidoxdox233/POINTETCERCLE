#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;
Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(double a, double b)
{
	this->x = a;
	this->y = b;
}

Point Point::translation(double dx, double dy)
{
	Point c;
	c.x = this->x + dx;
	c.y = this->y + dy;
	return c;
}

void Point::afficher() const
{
	cout << "x=" << this->x << ", y=" << this->y ;
}

double Point::distance(const Point& c) const
{
	double distance;
	distance = sqrt(pow(c.x - this->x, 2) + pow(c.y - this->y, 2));
	return distance;
}

bool Point::egalitePoint(const Point& b) const
{
	if (this->x == b.x && this->y == b.y)
		return true;
	else return false;
}
