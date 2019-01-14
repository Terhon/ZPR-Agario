#include <balls/BallModel.hpp>

int BallModel::grow(int eatenRadius){ //eaten ball's radius
    int eatenArea = pow(eatenRadius, 2) * M_PI;
    int thisArea = pow(radius, 2) * M_PI;

    radius = sqrt((eatenArea + thisArea) / M_PI);
    return radius;
}