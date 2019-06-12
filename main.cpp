#include <iostream>
#include "main.h"

void MyClass::Hello()
{
    std::cout << "Hello!" << std::endl;
}

int main()
{
    MyClass::Hello();

    return 0;
}
