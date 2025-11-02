#include "willow/test.h"

constexpr inline auto test_toString() -> int {
    if (Willow::toString(Willow::Status::None) != "None") {
        return 1;
    }
    if (Willow::toString(Willow::Status::Pass) != "Passed") {
        return 2;
    }
    if (Willow::toString(Willow::Status::Fail) != "Failed") {
        return 3;
    }
    if (Willow::toString(Willow::Status::Skip) != "Skipped") {
        return 4;
    }
    return 0;
}

constexpr inline auto test_Test_Operator() -> int {
    Willow::Test t = {"t", [] { return 42; }};
    t();

    return !(t.retcode == 42);
}
