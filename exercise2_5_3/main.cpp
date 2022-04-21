#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"

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

	Point* pt1;
	pt1 = new Point(2, 1); //create point for SetElement later
	Array* arr1;
	arr1 = new Array; //default constructor with 10 elements in array

	cout << "Size of array is: " << arr1->Size() << endl; //should spit out 10
	print(arr1->GetElement(3)); //should give me a point (0,0) because I used default constructor

	Array* arr2;
	arr2 = new Array(3); //constructor where I create array of size 5 instead of 10
	arr2->SetElement(*pt1, 2); //set third slot of arr2 to be point pt (2,1)
	cout << "Size of array is: " << arr2->Size() << endl;
	print(arr2->GetElement(2)); //check third slot of arr2 really is pt (2,1)

	Array* arr3;
	arr3 = new Array(*arr2); //copy constructor made arr3 using arr2 as inspiration
	cout << "Size of array is: " << arr3->Size() << endl; //should have same size as arr2, namely 3.
	print(arr3->GetElement(2)); //check third slot of arr3 really is pt (2,1)

	Array* arr4;
	arr4 = new Array(3);
	arr4 = arr2; //assignment operator test
	cout << "Size of array is: " << arr4->Size() << endl; //should have same size as arr2, namely 3.
	print(arr4->GetElement(2)); //check third slot of arr4 really is pt (2,1)
	print(arr4->GetElement(10));//trying to get element in 11th slot. There is no such slot so it should give me arr4[0] point (0,0)

	arr3 = arr3; //self assignment
	cout << "Size of array is: " << arr3->Size() << endl;
	print(arr3->GetElement(2)); //check third slot of arr3 really is pt (2,1)

	Array* arr5;
	Point* pt2 = new Point(-1, 5);
	arr5 = new Array(5);
	arr5->SetElement(*pt2, 0);//slot 1 gets pt2
	arr5->SetElement(*pt1, 3); //slot 4 gets pt1
	cout << "Size of array is: " << arr5->Size() << endl; 
	print(arr5->GetElement(0)); //check first slot of arr5 really is p2 (-1,5)
	print(arr5->GetElement(3)); //check fourth slot of arr5 really is p1 (2,1)

	//check first slot in array is pt2 (-1,5)
	arr5[3]; //in theory this should be a point and I should be able to print it and get pt1 (2,1) back just like GetElement(3) above.
	
	delete arr1; //kill arr1 and set memory free
	delete arr2; //kill arr2 and set memory free
	delete arr3; //same as above but arr3
	//delete arr4; //No need to nuke arr4. It got nuked when I killed arr2 it seems.
	delete arr5;
	delete pt1;
	delete pt2;


return 0;

}