#include "Point.h"

Point::Point(double x, double y)
{
	cout << "Constructeur point " << endl;
	this->x = x;
	this->y = y;
}

Point Point::createur(double d1,double d2)
{
	return Point(d1,d2);
}

void Point::affichage() const
{
	cout << "X : "<< this->x << endl;
	cout << "Y : " << this->y << endl;
}

void Point::Translater(const double& d1, const double& d2)
{
	this->x = d1;
	this->y = d2;
}

bool Point::equal(const Point& p)
{
	return(this->x == p.x && this->y == p.y);
}

double Point::distance(const Point& p)
{
	double distance;
	distance = sqrt(pow((this->x - p.x), 2) + (pow(this->y - p.y,2)));
	return distance;
}

