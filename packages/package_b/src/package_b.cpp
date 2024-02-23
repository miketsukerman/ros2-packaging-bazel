#include "package_b/package_b.h"

auto main(int argc, char **argv) -> int 
{
    package_b::B b;

    auto r = b.process();

    return 0;
}
