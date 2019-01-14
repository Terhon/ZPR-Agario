#ifndef AGARIO_OBSTACLEMODEL_HPP
#define AGARIO_OBSTACLEMODEL_HPP

#include <balls/BallModel.hpp>

class ObstacleModel : public BallModel {
    private:
    public:
        ObstacleModel(int x, int y, int radius) : BallModel(x, y, radius) {}
        std::vector<BallModel>::iterator checkCollision(std::vector<BallModel> v);    
        void update(){}
};

#endif