#ifndef WILLOW_H
#define WILLOW_H

#include <string>
#include <vector>

#include "reporters.h"
#include "test.h"

namespace Willow {
    auto run_tests(std::vector<Test>, Reporter&) -> int;
}

#endif  // WILLOW_H
