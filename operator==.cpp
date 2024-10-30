#include "./operator==.hpp"
#include "./point.hpp"

namespace equal{
	bool operator==(const coordinate::Point& point1, const coordinate::Point& point2) {
		return (point1.x == point2.x && point1.y == point2.y);
	}
}