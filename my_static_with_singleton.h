#pragma once

inline int& getInstance()
{
    static int instance = 0;
    return instance;
}
