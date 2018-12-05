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

BOOST_AUTO_TEST_CASE(peek_returns_null_on_new_app){
    AppFixture f;
    BOOST_TEST(f.app->peekStack() == nullptr);
}

BOOST_AUTO_TEST_CASE(new_app_apps_stacks_size_is_zero){
    AppFixture f;
    BOOST_TEST(f.app->stackSize() == 0);
}

BOOST_AUTO_TEST_CASE(after_first_update_stack_size_equals_one){
    AppFixture f;
    f.app->update();
    BOOST_TEST(f.app->stackSize() == 1);
}