#include <gtest/gtest.h>
#include "app.h"

TEST(ATEST, BTEST) {
    int a = 8;

    EXPECT_EQ(1, program.abc(2, 1));
}
