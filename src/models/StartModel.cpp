#include <StartModel.hpp>

StartModel::StartModel(App* a)
{
    app = a;
    view = new StartView();
    controller = new StartController(this);
}

void StartModel::update(){
    
}

void StartModel::pushStart()
{
    app->pushStack(new StartModel(app));
}