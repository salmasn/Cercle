#pragma once

#include "Point.h"

class Cercle
{
private:
	const static double PI;
	double rayon;
	Point* center;

public:
	Cercle(double,Point);
	void affichage() const;
	void ModifierRayon(const double&);
	void TranslaterCenter(const double&, const double&);
	double Surface() const;
	double perimetre() const;
	bool equality(const Cercle&)const;
	bool operator==(const Cercle&)const;
	bool appartenir(const Point&) const;
	~Cercle();
};

