#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
using namespace std;

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
	//intialize objects to test operators
	Point pt1(2, 1);
	Point pt2(3, -1);
	Point pt3(1, 2);
	Point pt4(0, -3);

	cout << pt1 << endl;

	Line l1(pt1, pt2);

	cout << l1 << endl;

	Line l2(pt3, pt4);

	Circle c1(2, pt1);

	cout << c1 << endl;
	Circle c2(5, pt2);

	
	//negation operator
	/*
	Point pt5 = -pt1;
	print(pt5);

	//scalar operator
	int scalar = 2;
	Point pt6 = pt3 * scalar;
	print(pt6);

	//addition
	Point pt7 = pt3 + pt4;
	print(pt7);

	//== test
	Point pt8(7, 7);
	Point pt9(-2, 3);
	
	if (pt8 == pt9) {
		cout << "pt8 and pt9 are equal." << endl;
	}
	else {
		cout << "pt8 and pt9 are not equal" << endl;
	}
	

	//= test
	//before = test
	Point pt10(2, 2);
	Point pt11(-1, -3);
	print(pt10);
	pt10 = pt11;
	//after =
	print(pt10);

	//*= test
	//pt1 original value 
	print(pt1);
	pt1 *= 5;
	//value after *=
	print(pt1);

	//line = test
	print(l1);
	l1 = l2;
	print(l1);

	//circle = test
	print(c1);
	c1 = c2;
	print(c1);
*/	
	return 0;

}