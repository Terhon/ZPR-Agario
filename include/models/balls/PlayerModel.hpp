#ifndef AGARIO_PLAYERMODEL_HPP
#define AGARIO_PLAYERMODEL_HPP

#include <balls/BallModel.hpp>

class PlayerModel : public BallModel {
private:
public:

    PlayerModel(int x, int y, int r);

    virtual void update();
};

#endif