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

	int size{};
	Point* pt1; //will be for default constructor
	Point* pt2; //will be for constructor with doubles
	Point* pt3; //will be for copy constructor

	pt1 = new Point;
	pt2 = new Point(2, 3);
	pt3 = new Point(*pt2);

	cout << pt1->Distance() << endl;
	cout << pt2->Distance() << endl;
	cout << pt3->Distance() << endl;

	cout << *pt1 << endl;
	cout << *pt2 << endl;
	cout << *pt3 << endl;

	delete pt1;
	delete pt2;
	delete pt3;

	cout << "Please enter a number for the size of the array: ";
	cin >> size;

	Point* pt4 = new Point[size]; 
	//I don't get an error when doing the above doing above I get the address 
	//to the mem being used

	//Looks like I can't use other constructors because I have no way to put in both
	//a coordinate or another point and specify size at the same time to then populate an array.


	//print(pt4);//can't print gives me syntax error already.

	cout << pt4 << endl;

	delete[] pt4;


return 0;

}