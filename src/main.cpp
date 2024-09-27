#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <vector>
#include "MockUser.h"

TEST(testCase1, should_3_when_1_2) {
    EXPECT_EQ(1 + 2, 3);
    std::cout << "testCase1" << std::endl;
}

TEST(testCase1, should_3_when_1_3) {
    EXPECT_EQ(1 + 2, 3);
    std::cout << "testCase1" << std::endl;
}

TEST(testCase2, test) {
    MockUser user;
    EXPECT_CALL(user, getAge()).
    Times(::testing::AtLeast(5)).
    WillOnce(::testing::Return(1)).
    WillOnce(::testing::Return(2)).
    WillRepeatedly(::testing::Return(3));
    std::vector<int> ages{1,2,3,4,5,6,7};

    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;
    std::cout << user.getAge() << std::endl;

}

int main(int argc, char **argv) {
    std::cout << "Hello world" << std::endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}