#include <states/EndModel.hpp>
#include <states/StartModel.hpp>

EndModel::EndModel(App* a)
{
    app = a;
    view = new EndView(this);
    controller = new EndController(this);
}

void EndModel::update(){
}

void EndModel::resetGame()
{
    while(app->stackSize() > 0)
        app->popStack();
    app->pushStack(new StartModel(app));
}

