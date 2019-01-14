#ifndef AGARIO_BOTMODEL_HPP
#define AGARIO_BOTMODEL_HPP

#include <balls/BallModel.hpp>

class BotModel : public BallModel {
    private:
    public:
        std::vector<BallModel>::iterator checkCollision(std::vector<BallModel> v);    
        void update(){}
};

#endif