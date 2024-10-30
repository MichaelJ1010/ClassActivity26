#include "./operator.hpp"
#include "./point.hpp"

namespace stream {
	ostream& operator<< (ostream& stream, const coordinate::Point& point) {
		stream << "(" << point.x << "," << point.y << ")" << "\n";
	}
}
