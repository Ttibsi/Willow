#include "willow/reporters.h"

// PreCommitReporter
class TestPreCommitReporter : public Willow::PreCommitReporter {
   public:
    static constexpr inline auto test_print() -> int {
        // NOTE: WE can test the logic and what's held in `results`
        return 0;
    }

    static constexpr inline auto test_cleanup() -> int { return 0; }

    static constexpr inline auto test_highlight() -> int { return 0; }
};
