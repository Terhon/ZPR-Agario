#include <balls/BallModel.hpp>

BallModel::BallModel(int x, int y, int r):x(x), y(y), radius(y) {}

int BallModel::grow(int eatenRadius){ //eaten ball's radius
    int eatenArea = pow(eatenRadius, 2) * M_PI;
    int thisArea = pow(radius, 2) * M_PI;

    radius = sqrt((eatenArea + thisArea) / M_PI);
    return radius;
}

std::vector<BallModel>::iterator BallModel::checkCollision(std::vector<BallModel> v){
    for (std::vector<BallModel>::iterator b = v.begin(); b != v.end(); ++b) {
        if(abs(x + radius/2 - (b->getX() + b->getRadius()/2)) < (radius + b->getRadius())) 
            if(abs(y + radius/2 - (b->getY() + b->getRadius()/2)) < (radius + b->getRadius()))
                if(radius > b->getRadius()) {
                    return b;
                }
    }

    return v.end();
}