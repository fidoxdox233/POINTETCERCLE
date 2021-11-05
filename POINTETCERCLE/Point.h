#pragma once
class Point
{
public:
	Point();
	Point(double a, double b);
	Point translation(double dx,double dy);
	void afficher()const;
	double distance(const Point& c) const;
	bool egalitePoint(const Point& b)const;
	

private:
	double x;
	double y;

};

