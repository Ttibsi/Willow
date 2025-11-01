#ifndef WILLOW_REPORTER_H
#define WILLOW_REPORTER_H

#include <print>

#include "test.h"

namespace Willow {
    class Reporter {
       public:
        virtual auto print(const Test& test) -> void = 0;
        virtual ~Reporter() = default;
    };

    class DefaultReporter : public Reporter {
       private:
        int test_count = 0;

       public:
        inline DefaultReporter() {};

        inline auto print(const Test& test) -> void {
            std::println("[{}] {}\t{}", ++test_count, test.name, toString(test.status));
        }
    };

}  // namespace Willow

#endif  // WILLOW_REPORTER_H
