#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "AppTest"

#include <boost/test/unit_test.hpp>

#include <App.hpp>
#include <states/StartModel.hpp>
#include <states/PauseModel.hpp>

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

BOOST_FIXTURE_TEST_CASE(push_stack_increases_stack_size, AppFixture) {
    app->pushStack(new StartModel(app));
    BOOST_CHECK(app->stackSize() == 1);
}

BOOST_FIXTURE_TEST_CASE(new_app_apps_stacks_size_is_zero, AppFixture) {
    BOOST_CHECK(app->stackSize() == 0);
}

BOOST_FIXTURE_TEST_CASE(set_running_false_ends_app, AppFixture) {
    app->setRunning(false);
    app->run();
    BOOST_CHECK(true);
}

BOOST_FIXTURE_TEST_CASE(pop_stack_decreases_stack_size, AppFixture) {
    app->pushStack(new StartModel(app));
    app->popStack();
    BOOST_CHECK(app->stackSize() == 0);
}

BOOST_FIXTURE_TEST_CASE(peek_stack_shows_top_state, AppFixture) {
    app->pushStack(new StartModel(app));
    app->pushStack(new PauseModel(app, 0));
    BOOST_CHECK(dynamic_cast<PauseModel *>(app->peekStack()));
    app->popStack();
    BOOST_CHECK(dynamic_cast<StartModel *>(app->peekStack()));
}

