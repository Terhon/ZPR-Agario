#include <states/EndModel.hpp>
#include <states/StartModel.hpp>

EndModel::EndModel(App *a, int s) {
    app = a;
    score = s;
    view = new EndView(this);
    controller = new EndController(this);
}

void EndModel::update() {
}

void EndModel::resetGame() {
    while (app->stackSize() > 0)
        app->popStack();
    app->pushStack(new StartModel(app));
}

void EndModel::exitGame() {
    app->setRunning(false);
}

