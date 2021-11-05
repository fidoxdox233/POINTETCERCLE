#include "Cercle.h"
#include<iostream>
#include<math.h>
using namespace std;
 const double Cercle::pi = 3.14;


Cercle::Cercle()
{
	Point p;
	this->centre = p;
	this->R = 0.0;
}

Cercle::Cercle( const Point &a, double z)
{
	this->R = z;
	this->centre = a;
}


void Cercle::Affiche() const
{   cout << "le cercle de rayon=" << this->R <<" et de centre de coordonnees : ";
	this->centre.afficher();
	cout << endl;
	
}

void Cercle::changerRayon(double r)
{
	this->R = r;
	
}
Cercle Cercle::translate(double a, double b)
{
	Cercle nv;
	nv.centre = this->centre.translation(a, b);
	nv.R = this->R;
	return nv;

}


double Cercle::surface() const
{
	return Cercle::pi*pow(this->R,2);
}

double Cercle::perimetre() const
{
	return 2*pi*this->R;
}

bool Cercle::egal(const Cercle& b) const
{

	if (this->centre.egalitePoint(b.centre) && this->R == b.R) return true;
	else
	return false;
}

bool Cercle::appartenance(Point& t) const
{
	if (this->centre.distance(t) == this->R) return true;
	else return false;
}


