#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"

using namespace std;
using namespace PAULLOPEZ::CAD;
using namespace PAULLOPEZ::CONTAINERS;
namespace PLC = PAULLOPEZ::CAD;
namespace PLCN = PAULLOPEZ::CONTAINERS;

void print(const Point& pnt) {
	cout << "Your point is: (" << pnt.X() << "," << pnt.Y() << ")" << endl;
}
void print(const Line& l) {
	l.start();
	l.end();
}
void print(const Circle& c) {
	cout << endl << "Radius is: " << c.rad() << endl;
	Point pnt = c.ctr();
	cout << "X coordinate of center is: " << pnt.X() << endl ;
	cout << "Y coordinate of center is: " << pnt.Y() << endl;
}
int main() {

	PAULLOPEZ::CAD::Point pt1; //full namespace for point very nice.
	PAULLOPEZ::CAD::Point pt2;
	pt1 = Point(2, 1); 
	pt2 = Point();
	print(pt1);
	print(pt2);

	using PLC::Line; //declaration for Line
	Line l1(pt1, pt2);
	print(l1);

	using PAULLOPEZ::CONTAINERS::Array; //declaration for complete CONTAINERS namespace
	Array arr = Array();
	cout << "Size of array is: " << arr.Size() << endl;
	cout << "Point in fourth slot is: " << arr.GetElement(3) << endl;


	using PLC::Circle; //using Circle class by using shorter alias for CAD namespace
	Circle c1 = Circle(2.25, pt1);
	print(c1);



return 0;

}