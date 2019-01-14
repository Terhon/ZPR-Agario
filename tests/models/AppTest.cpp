#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "AppTest"
#include <boost/test/unit_test.hpp>

#include <App.hpp>
#include <states/StartModel.hpp>
#include <balls/BallModel.hpp>

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


struct BallModelFixture {
    BallModelFixture() { 
        BallModel * b = new BallModel();
        b->setRadius(10);
        BOOST_TEST_MESSAGE( "setup BallModelFixture" ); 
    }
    ~BallModelFixture() { 
        BOOST_TEST_MESSAGE( "teardown BallModelFixture" ); 
        delete b;
    }

    BallModel * b;
}; 

BOOST_FIXTURE_TEST_CASE(push_stack_increases_stack_size, AppFixture){
    app->pushStack(new StartModel(app));
    BOOST_CHECK(app->stackSize() == 1);
}

BOOST_FIXTURE_TEST_CASE(new_app_apps_stacks_size_is_zero, AppFixture){
    BOOST_CHECK(app->stackSize() == 0);
}

BOOST_FIXTURE_TEST_CASE(ball_grows, BallModelFixture){
    int g = b->grow(20);
    BOOST_CHECK(g > 21 && g < 23);
} 

