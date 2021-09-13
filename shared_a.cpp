#include "shared_a.h"
#include "my_static_with_singleton.h"

#include <iostream>


namespace shared_a
{

void printAndIncrement()
{
    int& instance = getInstance();

    std::cout << "shared_a: " << instance << '\n';

    instance++;
}

void printAndIncrement_g()
{
    std::cout << "shared_a, g_int: " << g_int << '\n';
    g_int++;
}

}  // namespace shared_a
