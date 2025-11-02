#include "testReporter.h"
#include "willow/willow.h"

namespace FixtureFuncs {
    constexpr auto pass() -> int {
        return 0;
    }
    constexpr auto fail() -> int {
        return 1;
    }
};  // namespace FixtureFuncs

constexpr inline auto test_runTests() -> int {
    SilentReporter r = {};
    int ret = Willow::runTests(
        {{"pass", FixtureFuncs::pass},
         {"fail", FixtureFuncs::fail},
         {"skip", FixtureFuncs::fail, Willow::Status::Skip}},
        r);

    return !(ret == 1);
}
