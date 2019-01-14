#include <balls/BallModel.hpp>

BallModel::BallModel(){
}

BallModel::BallModel(int x, int y) : x(x), y(y){
}

int BallModel::grow(int eatenRadius){ //eaten ball's radius
    int eatenArea = pow(eatenRadius, 2) * M_PI;
    int thisArea = pow(radius, 2) * M_PI;

    radius = sqrt((eatenArea + thisArea) / M_PI);
    return radius;
}