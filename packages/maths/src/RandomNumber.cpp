#include "maths/RandomNumber.h"

namespace maths {

RandomNumber::RandomNumber() : e1(r()), uniform_dist(-10,10) {}

int RandomNumber::generate() {
    return uniform_dist(e1);
}

} // namespace maths
