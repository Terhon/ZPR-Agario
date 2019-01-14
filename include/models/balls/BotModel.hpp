#ifndef AGARIO_BOTMODEL_HPP
#define AGARIO_BOTMODEL_HPP

#include <balls/BallModel.hpp>

class BotModel : public BallModel {
    private:
    public:  
        BotModel(int x, int y, int radius) : BallModel(x, y, radius) {}
        void update(){}
};

#endif