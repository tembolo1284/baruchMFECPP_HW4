#ifndef Line_HPP
#define Line_HPP
#include <iostream>
#include <string>
using namespace std;

class Line {
private:
	Point startPoint;
	Point endPoint; //start and end points (0,0)

public:
	Line(); //constructor start and end points (0,0)
	Line(const Point& pt1, const Point& pt2); //initialization with start and end pts specified
	Line(const Line& l); //copy constructor

	virtual ~Line(); //destructor just copied virtual from the video

	Point start() const; //get start pt of current line
	void start(const Point& pt); //make pt2 new start point of line

	Point end() const; //get end point of current line
	void end(const Point& pt); //make pt2 new end point
	//assignment operator
	Line& operator = (const Line& source);

	string ToString() const; //returns cout string description of the line

	double Length() const; //calc dist from current start to end point (length in R^2)

};

ostream& operator << (ostream& os, const Line& l);

#endif