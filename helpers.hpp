#pragma once

#include <cmath>

double distanceFromRadar (double x, double y) {
    return std::sqrt(pow((x - 0), 2) + pow((y- 0), 2));
}