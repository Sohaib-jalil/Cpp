#pragma once
namespace Geom{
class Point
{
public:
	
	//Point(float x, float y);
	//Point(double x);
	void afficherPoint() const;
	void translate(double dx, double dy);
	//void translate();
	//int translate(Point p);
	//void m1(int* a); 
	//void m1(int a[]);  invalide comme surcharge == surdefinition== overload
	bool comparer(const Point& p) const;
	double distance(const Point &p) const;
	bool operator==(const Point& p) const;
	Point operator+(const Point& p)const ;
	static Point creator(double x, double y);
	~Point();
private: 
	Point();
	Point(double x, double y);
	Point(const Point& p);// constructeur de recopie
	double x; 
	double y;
		int* tab;
};
};
