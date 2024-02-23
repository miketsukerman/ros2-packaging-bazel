#pragma once

#include <package_a/package_a.h>

namespace package_b
{

class B {

public:

    int process() {
        return package_a::A::value() * 2;
    }

};

} // namespace package_a
