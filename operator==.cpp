#include "./operator==.hpp"
#include "./point.hpp"

bool operator==(coordinate::Point point1, coordinate::Point point2) {
	return (point1.x == point2.x && point1.y == point2.y);
}