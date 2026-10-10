#include <iostream>
#include <cmath>

double distanceFromRadar (double x, double y);

int main() {
    // Target's starting position and velocity
    double x = -150.0, y = 50.0;
    double vx = 20.0, vy = 0.0;      // moves right 20 units per sweep
    const double radarRange = 100.0; // radar sits at (0, 0)

    for (int sweep = 1; sweep <= 15; sweep++) {
        // TODO 1: move the target (add velocity to position)
        x += vx;
        y += vy;

        // TODO 2: compute distance from the radar: sqrt(x*x + y*y)
        double distance = distanceFromRadar (x, y);
        // TODO 3: print the sweep number, x, y, distance,
        //         and "IN RANGE" or "OUT OF RANGE"

        std::cout << ""
    }
}

double distanceFromRadar (double x, double y) {
    return 
}