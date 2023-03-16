#include "operations.h"
#include <iostream>
#include <cmath>

double entry_point (operations operations)
{
    double result = 0;
    std::string sign = operations.operation;
    if (sign == "+" || sign  == "-" || sign == "/" || sign == "*")
        result = result_calculation(operations);
    else if (sign == "cosx" || sign == "sinx" || sign == "tgx" || sign == "ctgx")
        result = trig_calculation(operations);
    else if (sign == "Sqrt" || sign == "x^2" || sign == "1/x")
        result = optional_calculation(operations);
    return result;
}

double result_calculation(operations operations)
{
    double result = 0;
    std::string sign = operations.operation;
    if (sign== "+")
        result = operations.num_first + operations.num_second;
    else if (sign == "-")
        result = operations.num_first - operations.num_second;
    else if (sign == "*")
        result = operations.num_first * operations.num_second;
    else if (sign == "/")
        if (operations.num_second == 0)
            result = ERROR;
        else
            result = operations.num_first / operations.num_second;
    return result;
}

double trig_calculation(operations operations)
{
    double result = 0;
    std::string operate = operations.operation;
    if (operate == "cosx")
        result = cos(operations.num_second);
    else if (operate == "sinx")
        result = sin(operations.num_second);
    else if (operate == "tgx")
        if (cos(operations.num_second) == 0)
            result = ERROR;
        else
            result = tan(operations.num_second);
    else if (operate == "ctgx")
        if (sin(operations.num_second) == 0)
            result = ERROR;
        else
            result = 1/(tan(operations.num_second));
    return result;
}

double optional_calculation(operations operations)
{
    double result = 0;
    std::string operate = operations.operation;
    if (operate == "Sqrt")
        if (operations.num_second > 0)
            result = (sqrt(operations.num_second));
        else
            result = ERROR;
    else if (operate == "x^2")
        result = pow(operations.num_second, 2);
    else if (operate == "1/x")
        if (operations.num_second != 0)
            result = 1/(operations.num_second);
        else
            result = ERROR;
    return result;
}
