#ifndef AGARIO_BOTMODEL_HPP
#define AGARIO_BOTMODEL_HPP

#include <balls/BallModel.hpp>
#include <random>
#include <chrono>

class BallModel;

class BotModel : public BallModel {
private:
    int angle;
    std::default_random_engine* gen;
    std::chrono::high_resolution_clock::time_point lastDecision;

public:
        BotModel(int x, int y, int r);
        virtual void update();
        void changeAngle();
};

#endif