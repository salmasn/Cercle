#include "Cercle.h"

const double Cercle::PI = 3.14;

Cercle::Cercle(double r, Point p) :rayon(r),center(new Point(p))
{
	cout << "Constructeur cercle " << endl;
}

void Cercle::affichage() const
{
	
	cout << "Le rayon: " << this->rayon << endl;
	cout << "Le centre: " << endl;
	this->center->affichage();
}

void Cercle::ModifierRayon(const double& r)
{
	this->rayon = r;
}

void Cercle::TranslaterCenter(const double& d1, const double& d2)
{
	this->center->Translater(d1, d2);
}

double Cercle::Surface() const
{
	return (pow(this->rayon, 2)*PI);
}

double Cercle::perimetre() const
{
	return (2*this->rayon* PI);;
}

bool Cercle::equality(const Cercle& c) const
{
	return(this->rayon == c.rayon && this->center->equal(*c.center));
}

bool Cercle::operator==(const Cercle& c) const
{
	return(this->rayon == c.rayon && this->center->equal(*c.center));
}

bool Cercle::appartenir(const Point& p) const
{
	return(this->center->distance(p) <= this->rayon);
}

Cercle::~Cercle()
{
	cout << "destructeur cercle " << endl;
}
