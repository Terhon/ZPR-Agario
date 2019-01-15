#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "AppTest"
#include <boost/test/unit_test.hpp>

#include <App.hpp>
#include <states/EndModel.hpp>
#include <states/PauseModel.hpp>
#include <states/StartModel.hpp>

struct AppFixture {
    AppFixture() {
        app = new App();
        BOOST_TEST_MESSAGE( "setup AppFixture" );
    }
    ~AppFixture() {
        BOOST_TEST_MESSAGE( "teardown AppFixture" );
        delete app;
    }

    App * app;
};

BOOST_FIXTURE_TEST_CASE(reset_game_resets_app_stack, AppFixture)
{
    app->pushStack(new PauseModel(app, 0));
    app->pushStack(new PauseModel(app, 0));
    app->pushStack(new EndModel(app, 0));

    dynamic_cast<EndModel*>(app->peekStack())->resetGame();
    BOOST_CHECK(app->stackSize() == 1);
    BOOST_CHECK(dynamic_cast<StartModel*>(app->peekStack()));
}

BOOST_FIXTURE_TEST_CASE(exit_game_ends_app, AppFixture)
{
    EndModel* m = new EndModel(app, 0);
    m->exitGame();
    app->run();
    BOOST_CHECK(true);
}