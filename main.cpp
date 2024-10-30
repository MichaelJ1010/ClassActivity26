#include "./point.hpp"
#include "./checkPoints.hpp"

using namespace point;
using namespace coordinate;

int main() {
	Point point1 { 1,2 };
	Point point2 { 1,2 };
	Point point3 { 2,1 };

	checkPoints(point1, point2);
	checkPoints(point1, point3);

	return 0;
}