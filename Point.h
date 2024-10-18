#pragma once
#include<iostream>
using namespace std;

class Point
{
private:

	int x;
	int y;
	Point(double, double);
public:
	static Point createur(double,double);
	void affichage() const;
	void Translater(const double&, const double&);
	bool equal(const Point&);
	double distance(const Point&);

};

