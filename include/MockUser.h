#pragma once
#include "User.h"
#include <gmock/gmock.h>

class MockUser : public User
{
public:
    MOCK_METHOD(int, getAge, (), (override));
};