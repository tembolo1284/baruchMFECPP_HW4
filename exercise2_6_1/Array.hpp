#ifndef Array_HPP
#define Array_HPP
#include <iostream>
#include <string>
using namespace std;

namespace PAULLOPEZ {
	namespace CONTAINERS {
		using namespace CAD;

		class Array {
		private:
			int size;
			CAD::Point* table; //using CAD::Point that's fun

		public:
			Array(); //constructor that creates array with 10 points in it
			Array(const int n); //initialization with dynamic variable
			Array(const Array& arr); //Copy constructor
			~Array(); //destructor

			//operator time
			Array& operator = (const Array& source); // Assignment operator.
			Point& operator [] (int index); // read and write version
			const Point& operator [] (const int index) const; //read only version


			int Size() const; //Size function
			void SetElement(const Point& pt, const int n); //Setter
			const Point& GetElement(const int n) const; //Getter

		};

	}
}

#endif