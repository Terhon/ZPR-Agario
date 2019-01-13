#ifndef ENDMODEL_HPP
#define ENDMODEL_HPP

#include <StateModel.hpp>
#include <EndView.hpp>
#include <EndController.hpp>

class EndModel : public StateModel 
{
    public:
    EndModel(App* a);
    virtual void update();
};

#endif