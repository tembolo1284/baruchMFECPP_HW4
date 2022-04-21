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
	Point** pt = new Point* [3]; //create pointer to array of pointers with 3 slots,
	
	for (int i = 0; i < 3; i++) {
		switch (i) {
		case 0:
			pt[0] = new Point;
			print(*pt[0]); // default constructor
			continue;
		case 1:
			pt[1] = new Point(2, 1);
			print(*pt[1]); //constructor with point set to (2,1)
			continue;
		case 2:
			pt[2] = new Point(*pt[1]);//copy constructor 
			print(*pt[2]); //copy constructor with point from pt[1]. Should be (2,1) also.
			continue;
		}
	}
	for (int j = 0; j < 3; j++) {
		delete pt[j];
	}
	delete[] pt; //this guy is throwing an exception for me. I'd normally include it to
	//delete the array itself.
return 0;
}