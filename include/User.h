#pragma once


class User {
public:
    virtual int getAge() = 0;

private:
    int age{10};
};