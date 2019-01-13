#include <StartModel.hpp>
#include <PlayModel.hpp>

StartModel::StartModel(App* a)
{
    app = a;
    view = new StartView();
    controller = new StartController(this);
}

void StartModel::update(){
    
}

void StartModel::pushPlay()
{
    app->pushStack(new PlayModel(app));
}