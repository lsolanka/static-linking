#include "shared_b.h"
#include "my_static_with_singleton.h"

#include <iostream>

namespace shared_b
{

void printAndIncrement()
{
    int& instance = getInstance();

    std::cout << "shared_b: " << instance << '\n';

    instance++;
}

void printAndIncrement_g()
{
    std::cout << "shared_b, g_int: " << g_int << '\n';
    g_int++;
}

}  // namespace shared_b
