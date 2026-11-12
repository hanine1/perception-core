#include <gtest/gtest.h>

#include <perception/core/point3d.hpp>

namespace perception::core
{

TEST(Point3fTest, StoresCoordinates)
{
    const Point3f point{1.F, 2.F, 3.F};

    EXPECT_FLOAT_EQ(point.x(), 1.F);
    EXPECT_FLOAT_EQ(point.y(), 2.F);
    EXPECT_FLOAT_EQ(point.z(), 3.F);
}

} // namespace perception::core