#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "PauseModelTest"

#include <boost/test/unit_test.hpp>

#include <App.hpp>
#include <states/EndModel.hpp>
#include <states/PauseModel.hpp>
#include <states/StartModel.hpp>

struct AppFixture {
    AppFixture() {
        app = new App();
        BOOST_TEST_MESSAGE("setup AppFixture");
    }

    ~AppFixture() {
        BOOST_TEST_MESSAGE("teardown AppFixture");
        delete app;
    }

    App *app;
};

BOOST_FIXTURE_TEST_CASE(reset_game_resets_app_stack, AppFixture) {
    app->pushStack(new PauseModel(app, 0));
    app->pushStack(new EndModel(app, 0));
    app->pushStack(new PauseModel(app, 0));

    dynamic_cast<PauseModel *>(app->peekStack())->resetGame();
    BOOST_CHECK(app->stackSize() == 1);
    BOOST_CHECK(dynamic_cast<StartModel *>(app->peekStack()));
}

BOOST_FIXTURE_TEST_CASE(end_game_pushes_end, AppFixture) {
    PauseModel *p = new PauseModel(app, 0);
    p->endGame();
    BOOST_CHECK(dynamic_cast<EndModel *>(app->peekStack()));
}