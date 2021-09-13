#include "shared_a.h"
#include "shared_b.h"

int main()
{
    shared_a::printAndIncrement();
    shared_b::printAndIncrement();

    shared_a::printAndIncrement_g();
    shared_b::printAndIncrement_g();
}
