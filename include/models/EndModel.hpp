#ifndef ENDMODEL_HPP
#define ENDMODEL_HPP

#include <StateModel.hpp>
#include <EndView.hpp>

class EndModel : public StateModel 
{
    public:
    EndModel(){view = new EndView();}
    virtual void update();
};

#endif