#pragma once

#ifdef _WIN32
#   define LIB_EXPORT __declspec(dllexport)
#else
#   define LIB_EXPORT
#endif

int LIB_EXPORT count_div(int x);
