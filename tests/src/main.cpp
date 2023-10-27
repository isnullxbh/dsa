/**
 * @file    main.cpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    27.10.2023
 */

#include <gtest/gtest.h>

auto main(int argc, char** argv) -> int
{
    using namespace testing;
    InitGoogleTest(&argc, argv);
    return UnitTest::GetInstance()->Run();
}
