// test.cpp
#include <igloo/igloo.h>
#include "add.h"

using namespace igloo;

Context(AddFunctionTests){
    Spec(ShouldAddTwoNumbers){
        Assert::That(add(2, 3), Equals(5));
}

Spec(ShouldAddNegativeNumbers)
{
    Assert::That(add(-2, -3), Equals(-5));
}

Spec(ShouldAddZero)
{
    Assert::That(add(0, 7), Equals(7));
    Assert::That(add(4, 0), Equals(4));
    Assert::That(add(0, 0), Equals(0));
}
}
;

int main()
{
    return TestRunner::RunAllTests();
}