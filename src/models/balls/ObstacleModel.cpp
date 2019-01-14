#include <balls/ObstacleModel.hpp>

std::vector<BallModel*>::iterator ObstacleModel::checkCollision(std::vector<BallModel*>* v){
    for (std::vector<BallModel*>::iterator b = v->begin(); b != v->end(); ++b) {
        if(abs(x + radius/2 - ((*b)->getX() + (*b)->getRadius()/2)) < (radius + (*b)->getRadius()))
            if(abs(y + radius/2 - ((*b)->getY() + (*b)->getRadius()/2)) < (radius + (*b)->getRadius()))
                if(radius < (*b)->getRadius()) {
                    return b;
                }
    }

    return v->end();
}