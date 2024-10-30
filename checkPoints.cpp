#include "./checkPoints.hpp"
#include "./operator==.hpp"
#include "./point.hpp"
#include "./operator.hpp"

#include <iostream>

using namespace equal;
using namespace std;
using namespace coordinate;
using namespace out;

namespace point {
	void checkPoints(const Point& point1, const Point& point2) {
		cout << "Point 1: " << point1 << endl;
		cout << "Point 2: " << point2 << endl;
		

		if (point1 == point2) {
			cout << "They are equal" << endl;
		}
		else {
			cout << "They are not equal" << endl;
		}

	}
}