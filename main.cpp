#include <iostream>
#include <iomanip>

#include "helpers.hpp"


int main() {
    double x = -150.0, y = 50.0;
    double vx = 20.0, vy = 0.0;      // moves right 20 units per sweep
    const double radarRange = 100.0; // radar sits at (0, 0)

    std::cout << std::setw(6)  << "Sweep"    << " |"
              << std::setw(8)  << "x"        << " |"
              << std::setw(8)  << "y"        << " |"
              << std::setw(10) << "Distance" << " | "
              << "Range\n";
    std::cout << std::fixed << std::setprecision(1);
    for (int sweep = 1; sweep <= 15; sweep++) {
        x += vx;
        y += vy;

        double distance = distanceFromRadar (x, y);

        std::cout << std::setw(6)  << sweep    << " |"
                << std::setw(8)  << x        << " |"
                << std::setw(8)  << y        << " |"
                << std::setw(10) << distance << " | ";
        if (distance < radarRange){ std::cout << "IN RANGE\n"; }
        else { std::cout << "OUT OF RANGE\n"; }
    }
    
}
