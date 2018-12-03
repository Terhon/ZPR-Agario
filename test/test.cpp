#define BOOST_TEST_MODULE const_string test
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <App.hpp>

struct AppFixture {
    AppFixture() : app(*(new App())) { 
        BOOST_TEST_MESSAGE( "setup AppFixture" ); 
    }
    ~AppFixture() { 
        BOOST_TEST_MESSAGE( "teardown AppFixture" ); 
    }

    App app;
};

BOOST_FIXTURE_TEST_CASE(peek_returns_null_on_new_app, AppFixture){
    BOOST_TEST(app.peekStack() == nullptr);
}

BOOST_FIXTURE_TEST_CASE(new_app_apps_stacks_size_is_zero, AppFixture){
    BOOST_TEST(app.stackSize() == 0);
}

BOOST_FIXTURE_TEST_CASE(after_first_update_stack_size_equals_one, AppFixture){
    app.update();
    BOOST_TEST(app.stackSize() == 1);
}

