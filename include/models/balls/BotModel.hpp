#ifndef AGARIO_BOTMODEL_HPP
#define AGARIO_BOTMODEL_HPP

#include <balls/BallModel.hpp>

class BallModel;

class BotModel : public BallModel {
    private:
    public:  
        BotModel(int x, int y, int r);
        virtual void update();
};

#endif