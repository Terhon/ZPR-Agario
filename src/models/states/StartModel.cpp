#include <states/StartModel.hpp>
#include <states/PlayModel.hpp>

StartModel::StartModel(App *a) {
    app = a;
    view = new StartView(this);
    controller = new StartController(this);
}

void StartModel::update() {

}

void StartModel::pushPlay() {
    app->pushStack(new PlayModel(app));
}