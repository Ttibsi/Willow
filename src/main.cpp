#include "tests/test_reporters.h"
#include "tests/test_test.h"
#include "tests/test_willow.h"
#include "willow/reporters.h"
#include "willow/willow.h"

constexpr auto fail_test(Willow::Test* test) -> int {
    Willow::alert(test, "This test fails");
    return 1;
}

auto main() -> int {
    Willow::PreCommitReporter reporter = {};

    return Willow::runTests(
        {
            {"fail", fail_test},
            {"test_runTests", test_runTests},
            {"test_toString", test_toString},
            {"test_Test_Operator()", test_Test_Operator},
            {"PreCommitReporter::print", TestPreCommitReporter::test_print},
            {"PreCommitReporter::cleanup", TestPreCommitReporter::test_cleanup},
            {"PreCommitReporter::highlight", TestPreCommitReporter::test_highlight},
        },
        reporter);
}
