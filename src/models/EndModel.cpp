#include <EndModel.hpp>

EndModel::EndModel(App* a)
{
    app = a;
    view = new EndView();
    controller = new EndController(this);
}

void EndModel::update(){
}

