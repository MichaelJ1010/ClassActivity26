#include "./operator.hpp"
#include "./point.hpp"

using std::ostream;

namespace out {
	ostream& operator<< (ostream& stream, const coordinate::Point& point) {
		return stream << "(" << point.x << "," << point.y << ")";
		
	}
}
