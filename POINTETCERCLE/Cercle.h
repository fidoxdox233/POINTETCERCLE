#pragma once
#include "Point.h"
class Cercle
{
public:
	Cercle();
	Cercle(const Point &a, double z) ;
	void Affiche() const;
	void changerRayon(double r);
	Cercle translate(double a, double b);
	double surface()const;
	double perimetre()const;
	bool egal(const Cercle& b) const;
	bool appartenance(Point &t) const;


	

private:
	const static double pi;
		
	Point centre;
	double R;

};

