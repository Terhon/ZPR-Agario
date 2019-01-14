#include <balls/BallModel.hpp>

BallModel::BallModel(int x, int y, int r):x(x), y(y), radius(y) {}

int BallModel::grow(int eatenRadius){ //eaten ball's radius
    int eatenArea = pow(eatenRadius, 2) * M_PI;
    int thisArea = pow(radius, 2) * M_PI;

    radius = sqrt((eatenArea + thisArea) / M_PI);
    return radius;
}