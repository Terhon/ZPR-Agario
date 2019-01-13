#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "AppTest"
#include <boost/test/unit_test.hpp>

#include <App.hpp>

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

BOOST_FIXTURE_TEST_CASE(push_stack_increases_stack_size, AppFixture){
    app->pushStack(new StartModel(app));
    BOOST_CHECK(app->stackSize() == 1);
}

BOOST_FIXTURE_TEST_CASE(new_app_apps_stacks_size_is_zero, AppFixture){
    BOOST_CHECK(app->stackSize() == 0);
}

