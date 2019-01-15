#ifndef AGARIO_FOODMODEL_HPP
#define AGARIO_FOODMODEL_HPP

#include <balls/BallModel.hpp>

class FoodModel : public BallModel {
public:
    FoodModel(int x, int y, int radius) : BallModel(x, y, radius) {
        std::cout << "construct";
    }

    void update() {}
};

#endif