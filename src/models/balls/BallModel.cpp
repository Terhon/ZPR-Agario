#include <balls/BallModel.hpp>

BallModel::BallModel(int x, int y, int r):x(x), y(y), radius(r)
{
    velocity = 100/radius;
}

void BallModel::keepInWindow()
{
    if(x > 1200)
        x = -2*radius;
    else if(x < -2*radius)
        x = 800;
    if(y > 800)
        y = -2*radius;
    else if(y < -2*radius)
        y = 800;
}

int BallModel::grow(int eatenRadius){ //eaten ball's radius
    int eatenArea = pow(eatenRadius, 2) * M_PI;
    int thisArea = pow(radius, 2) * M_PI;

    radius = sqrt((eatenArea + thisArea) / M_PI);
    return radius;
}

std::vector<BallModel*>::iterator BallModel::checkCollision(std::vector<BallModel*>* v){
    for (auto b = v->begin(); b != v->end(); ++b) {
        if(abs(x + radius/2 - ((*b)->getX() + (*b)->getRadius()/2)) < (radius + (*b)->getRadius()))
            if(abs(y + radius/2 - ((*b)->getY() + (*b)->getRadius()/2)) < (radius + (*b)->getRadius()))
                if(radius > (*b)->getRadius()) {
                    return b;
                }
    }

    return v->end();
}