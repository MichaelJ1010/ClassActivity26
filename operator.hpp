#ifndef OPERATOR_H
#define OPERATOR_H

#include "./point.hpp"
#include <ostream>

using std::ostream;

namespace out{
	ostream& operator<<(ostream& stream, const coordinate::Point& point2);
}
#endif